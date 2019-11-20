/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Fabián
 *
 * Created on 9 de junio de 2018, 10:02 AM
 */

#include <cstdlib>
#include <vector>
#include "Parque.h"
#include "Datos.h"
#include "Datos2015.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int inicio = 0; 
    int m = 0; 
    int metodo = 0;
    Parque* parque = new Parque(); 
    Datos* datos = new Datos();
    Datos* datos2 = new Datos();
    
    int datos3 = 0;
    while(metodo != 3 )
    {
        cout << "Seleccione los datos que desea usar \n1-Datos del 2018 \n2-Datos 2015"<< endl;
        cin >> datos3; 
        if(datos3 == 1)
        {
            cout<< "1- busqueda exahustiva \n2- programacion dinamica \n3- salir" << endl; 
            cin >> metodo; 
            if(metodo == 1)
            {
                cout << "introduzca la hora de ingreso en tiempo discreto."<< endl; 
                cin >> inicio; 
                cout << "introduzca hasta que hora desea estar en tiempo discreto."<< endl; 
                cin >> m ; 
                vector<int> resul = parque->busquedaExhaustiva(inicio, datos->espera, m, datos->getN(),  datos->disfrute, datos->traslado);
                //cout << parque->getCantidadMaxDeAtracciones()<< endl;
                for(int indice = 0; indice < parque->getCantidadMaxDeAtracciones(); indice++)
                {
                    cout << resul[indice] << endl;
                }
                cout << "la cantidad de atracciones es: ";
                cout << parque->getCantidadMaxDeAtracciones() << endl ;    
            }    
            else
            {

                cout << "introduzca la hora de ingreso en tiempo discreto."<< endl; 
                cin >> inicio; 
                cout << "introduzca hasta que hora desea estar en tiempo discreto."<< endl; 
                cin >> m ; 
                int i = 0; 
                vector<int> resul = parque->programacionDinamica(inicio, datos->espera, m, datos->getN(),  datos->getDisfrute(),  datos->getTraslado());
                //cout << parque->getCantidadMaxDeAtracciones()<< endl;
                for(int indice = 1; indice <= parque->getCantidadMaxDeAtracciones(); indice++)
                {
                    cout << resul[indice] << endl;
                }
                cout << "la cantidad de atracciones es: ";
                cout << parque->getCantidadMaxDeAtracciones() << endl ;   
            }
        }
        else
        {
                        cout<< "1- busqueda exahustiva \n2- programacion dinamica \n3- salir" << endl; 
            cin >> metodo; 
            if(metodo == 1)
            {
                cout << "introduzca la hora de ingreso en tiempo discreto."<< endl; 
                cin >> inicio; 
                cout << "introduzca hasta que hora desea estar en tiempo discreto."<< endl; 
                cin >> m ; 
                vector<int> resul = parque->busquedaExhaustiva(inicio, datos2->espera, m, datos2->getN(),  datos2->disfrute, datos2->traslado);
                //cout << parque->getCantidadMaxDeAtracciones()<< endl;
                for(int indice = 0; indice < parque->getCantidadMaxDeAtracciones(); indice++)
                {
                    cout << resul[indice] << endl;
                }
                cout << "la cantidad de atracciones es: ";
                cout << parque->getCantidadMaxDeAtracciones() << endl ;    
            }    
            else
            {

                cout << "introduzca la hora de ingreso en tiempo discreto."<< endl; 
                cin >> inicio; 
                cout << "introduzca hasta que hora desea estar en tiempo discreto."<< endl; 
                cin >> m ; 
                int i = 0; 
                vector<int> resul = parque->programacionDinamica(inicio, datos2->espera, m, datos2->getN(),  datos2->getDisfrute(),  datos2->getTraslado());
                //cout << parque->getCantidadMaxDeAtracciones()<< endl;
                for(int indice = 1; indice <= parque->getCantidadMaxDeAtracciones(); indice++)
                {
                    cout << resul[indice] << endl;
                }
                cout << "la cantidad de atracciones es: ";
                cout << parque->getCantidadMaxDeAtracciones() << endl ;   
            }
        }
    }
    return 0;
}

