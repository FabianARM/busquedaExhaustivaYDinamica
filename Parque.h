/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Parque.h
 * Author: Fabián
 *
 * Created on 9 de junio de 2018, 10:07 AM
 */
#ifndef PARQUE_H
#define PARQUE_H

#include <vector>
using namespace std;
class Parque {
public:
    Parque();
    Parque(const Parque& orig);
    virtual ~Parque();
    
vector<int> busquedaExhaustiva(int inicio, int** espera, int
m, int n,  int* disfrute,  int** traslado);// Plantilla para el metodo de busqueda exahutiva
  
vector<int> programacionDinamica(int inicio,  int** espera,
int m, int n,  int* disfrute,  int** traslado)//MEtodo programacion dinamica
;
  
vector<int> algoritmoAvido(const int** espera, int m,
int n, const int* disfrute, const int** traslado);
int getCantidadMaxDeAtracciones();
private:
    vector<int> vectorActual; 
    vector<int> vectorMax; 
    int cantidadActualDeAtracciones; 
    int cantidadMaxDeAtracciones;
    int tiempo; 
    vector<int> parqueBD(int** espera, int m, int n,  int* disfrute,  int** traslado); 
};


#endif /* PARQUE_H */

