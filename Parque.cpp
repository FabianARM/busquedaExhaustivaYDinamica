
/* 
 * File:   Parque.cpp
 * Author: Fabián
 * 
 * Created on 9 de junio de 2018, 10:07 AM
 */


#include "Parque.h"
#include "Datos.h"
#include <iterator>
#include<vector>
using namespace std; 
Parque::Parque()//SE le tiene que mandar la candidad de atracciones.
{

}

Parque::Parque(const Parque& orig) {
    
}

Parque::~Parque() {
    
}
/**
 * Metodo cascaron de busqueda exhaustiva
 * @param espera tiempos de espera de las atracciones, en el tiempo que va a permanecer en el parque
 * @param m cantidad de tiempo que va a estar el profesor en el parque. 
 * @param n la cantidad de atracciones que va a tener el parque. 
 * @param disfrute tiempos de disfrute de las atracciones. 
 * @param traslado tiempos de traslado entre las atracciones. 
 * @return vectorMax vector que va a contener el maximo de atracciones que se puede montar en un tiempo m
 */
vector<int> Parque::busquedaExhaustiva(int inicio, int** espera, int m, int n,  int* disfrute,  int** traslado) 
{
    vectorActual.resize((inicio+  m)/2);//Le cambiamos el tamaño a m/2
    vectorMax.resize((inicio + m)/2);
    vectorActual[0] = -1; //La primera entrada de nuestros vectores va a ser - 1 para hacer los calculos que se tarda en llegar a la primera atraccion. 
    vectorMax[0] = -1;
    tiempo =  m; 
    cantidadActualDeAtracciones = 1;
    cantidadMaxDeAtracciones = -1; //la inicializamos en -1 para que cualquier solucion que venga sea mayor. 
    //Vamos a retornar el vector resultado en un vector que solo contenga las atracciones que visito 
    vector<int> resul1 = parqueBD(espera, inicio, n, disfrute, traslado);
    vector<int> resul2;
    resul2.resize(cantidadMaxDeAtracciones - 1);
    for(int indice = 1; indice < cantidadMaxDeAtracciones; indice++ )
    {
        resul2[indice - 1] = resul1[indice];  
    }
    return resul2; // vector que solo tiene las atracciones que se visitaron. 
}
/**
 * metodo para obtener el tamaño del vector resultado de busqueda exahustiva
 * @return 
 */
int Parque::getCantidadMaxDeAtracciones()
{
    return cantidadMaxDeAtracciones - 1;
}
vector<int> Parque::parqueBD(int ** espera, int m, int n,  int* disfrute, int** traslado)
{
    //Para cuando tengamos una solucion. 
   if (m + traslado[vectorActual[cantidadActualDeAtracciones - 1] + 1][n] == tiempo - 1)// debemos saber que ninguna atraccion tarda menos de 5 min en dezplazamamiento ni disfrute entonces para tener calculo más exacots restamos 1 
    {
        cantidadActualDeAtracciones--;// Como ya encontramos la solucion no necesitamos  
        return vectorActual; //Vector que va a contener la combinacion actual. (Se debe iniciar com variable global.)
    }//Else implicito. 
    for(int indice = 0; indice < n; indice++)//para probar la combinacion de atracciones de la 0 a la n 
    {
        //Tenemos que revisar si no nos tenemos que ir del parque 
        //En el tiempo de espera tenemos que contemplar el tiempo que duramos llegango a la atraccion si son 5 min ejemplo de la entrada a n atraccion no llegariamos a las 9:00 llegariamos 9:05
        int tiempoDeFila = m + traslado[vectorActual[cantidadActualDeAtracciones - 1] + 1][indice];
        if ( tiempoDeFila < tiempo && espera[m + traslado[vectorActual[cantidadActualDeAtracciones-1] + 1][indice]][indice] + traslado[vectorActual[cantidadActualDeAtracciones-1] + 1][indice] + disfrute[indice] + traslado[indice + 1][n] + m < tiempo && (vectorActual[cantidadActualDeAtracciones - 1] != indice ))//Por lo que vamos a tener que crear ese T', x va a llevar la cuenta la cantidad de objetos que se insertan en el objeto.  
        {
            vectorActual[cantidadActualDeAtracciones] = indice; // La atraccion que se va a visitar
            cantidadActualDeAtracciones++; // podemos realizar el aumento de la variable que mide la cantidad de atracciones aqui c
            vectorActual = parqueBD(espera, m + espera[m + traslado[vectorActual[cantidadActualDeAtracciones - 2] + 1][indice]][indice] + traslado[vectorActual[cantidadActualDeAtracciones - 2] + 1][indice] + disfrute[indice], n, disfrute, traslado);    
        }
        if (cantidadActualDeAtracciones >= cantidadMaxDeAtracciones && m < tiempo)// Preguntamos si la combinacion actual es mejor que la maxima obtenida 
        {
            for(int indice2 = 1; indice2 < cantidadActualDeAtracciones; indice2++)//Procedemos a guardar el vector. 
            {
                vectorMax[indice2] = vectorActual[indice2]; // copiamos el vector .
            }
            cantidadMaxDeAtracciones = cantidadActualDeAtracciones; //Esto nos dice hasta donde contar. 
        } 
    }
    cantidadActualDeAtracciones--;
    return vectorMax;
}
vector<int> Parque::programacionDinamica(int inicio, int** espera, int m, int n,  int* disfrute,  int** traslado)
{
    vector<int> resultado;
    int F[m][n] ; // este es el oraculo
    for(int indice = inicio; indice < m; indice++)
    {
        for(int indice2 = 0; indice2 < n; indice2++)
        {
            F[indice][indice2] = 0; //inicializamos toda la matriz en 0 
        }
    }
    
    int maximo = -1;  
    for(int indice = 0; indice < m; indice++)//For que recorre las horas.
    {
        for(int indice2 = 0; indice2 < n; indice2++)// recorre las atracciones. 
        {
            maximo = -1;//iniciamos de forma negativa para poder capturar los datos de los tiempos de manera correcta.
            for(int indice3 = 0; indice3 < n; indice3++)// calcula la casilla actual revisando las anteriores.
            {
                if(indice2 != indice3)// que la atraccion anterior no sea la misma(ya que este no se podria calcular). 
                {
                    if(indice  >= traslado[indice2+1][indice3] + disfrute[indice3] && indice  >= traslado[indice2+1][indice3] + disfrute[indice3] + espera[indice - disfrute[indice3]][indice2] && maximo < F[indice -(traslado[indice2+1][indice3] + disfrute[indice3] + espera[indice - disfrute[indice3]][indice2])][indice3])
                    {
                        maximo =  F[indice -(traslado[indice2+1][indice3] + disfrute[indice3] + espera[indice - disfrute[indice3]][indice2])][indice3];
                        F[indice][indice2] = maximo + 1;// mas la atraccion que acabamos de visitar.  
                    }
                }
            }
        }
    }
    int tiempo = m;  
    int atraccion = 0;
    int max = -1; 
    int cantidadAtrac = 0;
    resultado.resize(m / 2);
    resultado[0] = -1;

    int tiempoParcial = 0; 
    // construimos el vector de atracciones.
    while(tiempo > 0)
    {
        max = 0; 
        for(int indice2 = 0; indice2 < n; indice2++)
        {
            if(indice2 != resultado[cantidadAtrac] && F[tiempo - traslado[0][indice2]][indice2] > max)
            {
                max = F[tiempo - traslado[0][indice2]][indice2]; 
                atraccion = indice2; 
                tiempoParcial = tiempo - traslado[0][indice2];
            }
        }    
        cantidadAtrac++; 
        if(  tiempo - (traslado[resultado[cantidadAtrac-1] + 1][atraccion] + disfrute[atraccion] + espera[tiempo - disfrute[atraccion]][atraccion] + traslado[0][atraccion]) <= 0)
        {  
           
            resultado[cantidadAtrac] = atraccion;
            tiempo = 0; 
        }
        else
        {
            
            tiempo = tiempo - (traslado[resultado[cantidadAtrac-1] + 1][atraccion] + disfrute[atraccion] + espera[tiempo - disfrute[atraccion]][atraccion]);
            resultado[cantidadAtrac] = atraccion;
        }
    }
    for(int indice = 0; indice < m; indice++)
    {
        for(int indice2 =0; indice2 < n; indice2++)
        {
            cout << F[indice][indice2]<<", ";
        }
        cout<< endl; 
    }
    cantidadMaxDeAtracciones =cantidadAtrac; 
    return resultado; 
}
