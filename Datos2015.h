/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Datos2015.h
 * Author: Fabián
 *
 * Created on 11 de julio de 2018, 04:42 AM
 */

#ifndef DATOS2015_H
#define DATOS2015_H
    int m = 13; // Filas

    int n = 8; // Columnas

                            // bo bu ch Ch mi pa pl pu rd sk te to tor torre
    int * disfrute = (int []) {1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1};


                                                  // T   S   B   CC  P  CL   D   SM
//     int ** espera =  (int *[]) {
//                                 /* 9:00 */(int []) {0, 0,  2,  0,  0,  0,  0,  0},
//                                /* 9:05 */ (int []) {0, 0,  1,  0,  0,  0,  0,  0},
//                                /* 9:10 */ (int []) {0,  0,  0,  0,  0,  0,  0,  0},
//                                /* 9:15 */ (int []) {0,  0,  0,  0,  0,  1,  0,  0},
//                                /* 9:20 */ (int []) {0,  1,  0,  0,  1,  1,  0,  0},
//                                /* 9:25 */ (int []) {0,  0,  0,  0,  2,  1,  0,  0},
//                                /* 9:30 */ (int []) {0,  0,  0,  0,  1,  1,  0,  0},
//                                /* 9:35 */ (int []) {0,  1,  0,  0,  2,  1,  0,  0},
//                                /* 9:40 */ (int []) {1,  0,  0,  0,  1,  1,  0,  0},
//                                /* 9:45 */ (int []) {1,  0,  0,  0,  1,  1,  1,  0},
//                                /* 9:50 */ (int []) {1,  0,  0,  1,  1,  1,  1,  0},
//                                /* 9:55 */ (int []) {1,  0,  0,  0,  1,  1,  1,  1},
//                               /* 10:00 */ (int []) {1,  0,  0,  1,  0,  2,  1,  1},//13
//                               /* 10:05 */ (int []) {0,  0,  0,  0,  1,  2,  1,  1},
//                               /* 10:10 */ (int []) {1,  0,  0,  0,  1,  2,  2,  2},
//                               /* 10:15 */ (int []) {1,  0,  0,  0,  1,  2,  1,  1},
//                               /* 10:20 */ (int []) {1,  0,  0,  0,  1,  2,  1,  2},
//                               /* 10:25 */ (int []) {1,  0,  0,  0,  2,  1,  1,  2},
//                               /* 10:30 */ (int []) {1,  0,  0,  0,  3,  2,  1,  1},
//                               /* 10:35 */ (int []) {1,  0,  0,  0,  4,  1,  1,  2},
//                               /* 10:40 */ (int []) {1,  0,  0,  0,  3,  1,  1,  3},
//                               /* 10:45 */ (int []) {1,  1,  0,  0,  3,  1,  1,  2},
//                               /* 10:50 */ (int []) {1,  1,  1,  0,  2,  3,  1,  3},
//                               /* 10:55 */ (int []) {1,  1,  0,  0,  4,  2,  2,  2},
//                               /* 11:00 */ (int []) {1,  3,  1,  0,  4,  3,  1,  2},//25
//                               /* 11:05 */ (int []) {0,  3,  0,  0,  3,  3,  1,  1},
//                               /* 11:10 */ (int []) {1,  2,  0,  1,  3,  2,  1,  2},
//                               /* 11:15 */ (int []) {1,  2,  0,  1,  3,  2,  1,  1},
//                               /* 11:20 */ (int []) {1,  1,  0,  0,  3,  2,  1,  2},
//                               /* 11:25 */ (int []) {1,  2,  0,  1,  4,  2,  2,  1},
//                               /* 11:30 */ (int []) {0,  2,  0,  1,  4,  2,  2,  1},
//                               /* 11:35 */ (int []) {1,  1,  1,  0,  4,  3,  1,  2},
//                               /* 11:40 */ (int []) {1,  2,  0,  0,  3,  3,  1,  2},
//                               /* 11:45 */ (int []) {1,  2,  0,  0,  2,  2,  1,  3},
//                               /* 11:50 */ (int []) {1,  1,  1,  0,  4,  1,  1,  2},
//                               /* 11:55 */ (int []) {1,  2,  0,  1,  3,  2,  1,  3},             
//                                /* 12:00 */(int []) {1,  1,  2,  0,  0,  0,  0,  0},
//                               /* 12:05 */ (int []) {1,  0,  1,  0,  0,  0,  0,  0},
//                               /* 12:10 */ (int []) {1,  1,  0,  0,  0,  0,  0,  0},
//                               /* 12:15 */ (int []) {1,  0,  0,  0,  0,  1,  0,  0},
//                               /* 12:20 */ (int []) {1,  0,  0,  0,  1,  1,  0,  0},
//                               /* 12:25 */ (int []) {1,  1,  0,  0,  2,  1,  0,  0},
//                               /* 12:30 */ (int []) {1,  1,  0,  0,  1,  1,  0,  0},
//                               /* 12:35 */ (int []) {1,  0,  0,  0,  2,  1,  0,  0},
//                               /* 12:40 */ (int []) {1,  0,  0,  0,  1,  1,  0,  0},
//                               /* 12:45 */ (int []) {1,  0,  0,  0,  1,  1,  1,  0},
//                               /* 12:50 */ (int []) {1,  0,  0,  1,  1,  1,  1,  0},
//                               /* 12:55 */ (int []) {1,  0,  0,  0,  1,  1,  1,  1},
//                                /* 1:00 */ (int []) {1,  0,  0,  1,  0,  2,  1,  1},//13
//                                /* 1:05 */ (int []) {1,  2,  0,  0,  1,  2,  1,  1},
//                                /* 1:10 */ (int []) {1,  1,  0,  0,  1,  2,  2,  2},
//                                /* 1:15 */ (int []) {1,  2,  0,  0,  1,  2,  1,  1},
//                                /* 1:20 */ (int []) {1,  1,  0,  0,  1,  2,  1,  2},
//                                /* 1:25 */ (int []) {1,  1,  0,  0,  2,  1,  1,  2},
//                                /* 1:30 */ (int []) {2,  3,  0,  0,  3,  2,  1,  1},
//                                /* 1:35 */ (int []) {1,  2,  0,  0,  4,  1,  1,  2},
//                                /* 1:40 */ (int []) {1,  2,  0,  0,  3,  1,  1,  3},
//                                /* 1:45 */ (int []) {1,  3,  0,  0,  3,  1,  1,  2},
//                                /* 1:50 */ (int []) {1,  3,  1,  0,  2,  3,  1,  3},
//                                /* 1:55 */ (int []) {1,  3,  0,  0,  4,  2,  2,  2},
//                                /* 2:00 */ (int []) {1,  4,  1,  0,  4,  3,  1,  2},//25
//                                /* 2:05 */ (int []) {1,  2,  0,  0,  3,  3,  1,  1},
//                                /* 2:10 */ (int []) {1,  2,  0,  1,  3,  2,  1,  2},
//                                /* 2:15 */ (int []) {1,  2,  0,  1,  3,  2,  1,  1},
//                                /* 2:20 */ (int []) {2,  2,  0,  0,  3,  2,  1,  2},
//                                /* 2:25 */ (int []) {1,  3,  0,  1,  4,  2,  2,  1},
//                                /* 2:30 */ (int []) {1,  4,  0,  1,  4,  2,  2,  1},
//                                /* 2:35 */ (int []) {1,  3,  1,  0,  4,  3,  1,  2},
//                                /* 2:40 */ (int []) {1,  3,  0,  0,  3,  3,  1,  2},
//                                /* 2:45 */ (int []) {1,  3,  0,  0,  2,  2,  1,  3},
//                                /* 2:50 */ (int []) {1,  4,  1,  0,  4,  1,  1,  2},
//                                /* 2:55 */ (int []) {1,  5,  0,  1,  3,  2,  1,  3}, 
//                                 /* 3:00 */(int []) {1,  4,  2,  0,  0,  0,  0,  0},
//                                /* 3:05 */ (int []) {1,  4,  1,  0,  0,  0,  0,  0},
//                                /* 3:10 */ (int []) {1,  3,  0,  0,  0,  0,  0,  0},
//                                /* 3:15 */ (int []) {1,  2,  0,  0,  0,  1,  0,  0},
//                                /* 3:20 */ (int []) {1,  2,  0,  0,  1,  1,  0,  0},
//                                /* 3:25 */ (int []) {1,  2,  0,  0,  2,  1,  0,  0},
//                                /* 3:30 */ (int []) {1,  1,  0,  0,  1,  1,  0,  0},
//                                /* 3:35 */ (int []) {1,  1,  0,  0,  2,  1,  0,  0},
//                                /* 3:40 */ (int []) {1,  1,  0,  0,  1,  1,  0,  0},
//                                /* 3:45 */ (int []) {1,  1,  0,  0,  1,  1,  1,  0},
//                                /* 3:50 */ (int []) {1,  1,  0,  1,  1,  1,  1,  0},
//                                /* 3:55 */ (int []) {1,  1,  0,  0,  1,  1,  1,  1},
//                                /* 4:00 */ (int []) {1,  0,  0,  1,  0,  2,  1,  1},//13
//                                /* 4:05 */ (int []) {1,  0,  0,  0,  1,  2,  1,  1},
//                                /* 4:10 */ (int []) {1,  4,  0,  0,  1,  2,  2,  2},
//                                /* 4:15 */ (int []) {1,  0,  0,  0,  1,  2,  1,  1},
//                                /* 4:20 */ (int []) {1,  0,  0,  0,  1,  2,  1,  2},
//                                /* 4:25 */ (int []) {1,  0,  0,  0,  2,  1,  1,  2},
//                                /* 4:30 */ (int []) {2,  0,  0,  0,  3,  2,  1,  1},
//                                /* 4:35 */ (int []) {1,  0,  0,  0,  4,  1,  1,  2},
//                                /* 4:40 */ (int []) {1,  0,  0,  0,  3,  1,  1,  3},
//                                /* 4:45 */ (int []) {1,  0,  0,  0,  3,  1,  1,  2},
//                                /* 4:50 */ (int []) {1,  0,  1,  0,  2,  3,  1,  3},
//                                /* 4:55 */ (int []) {1,  0,  0,  0,  4,  2,  2,  2},
//                                /* 5:00 */ (int []) {1,  0,  1,  0,  4,  3,  1,  2},//25
//                                /* 5:05 */ (int []) {1,  0,  0,  0,  3,  3,  1,  1},
//                                /* 5:10 */ (int []) {1,  8,  0,  1,  3,  2,  1,  2},
//                                 /*5:15 */ (int []) {1,  5,  0,  1,  3,  2,  1,  1},
//                                /* 5:20 */ (int []) {2,  4,  0,  0,  3,  2,  1,  2},
//                                /* 5:25 */ (int []) {1,  4,  0,  1,  4,  2,  2,  1},
//                                /* 5:30 */ (int []) {1,  4,  0,  1,  4,  2,  2,  1},
//                                /* 5:35 */ (int []) {1,  5,  1,  0,  4,  3,  1,  2},
//                                /* 5:40 */ (int []) {1,  5,  0,  0,  3,  3,  1,  2},
//                                /* 5:45 */ (int []) {1,  4,  0,  0,  2,  2,  1,  3},
//                                /* 5:50 */ (int []) {1,  5,  1,  0,  4,  1,  1,  2},
//                                /* 5:55 */ (int []) {1,  4,  0,  1,  3,  2,  1,  3},  
              int ** espera =  (int *[]) {
                                                        (int []){0,0,1,0,0,0,0,0,0,1,0,0,0},
                                                        (int []){0,1,0,0,0,0,0,0,1,0,0,0,0},
                                                        (int []){0,0,1,0,0,0,0,0,0,2,0,0,0},
                                                        (int []){0,0,1,1,0,0,0,0,0,2,1,0,0},
                                                        (int []){0,1,1,1,0,0,0,0,0,2,0,0,0},
                                                        (int []){0,0,1,1,0,0,0,1,0,2,0,0,0},
                                                        (int []){0,0,0,1,0,0,0,1,0,2,0,0,0},
                                                        (int []){0,1,1,1,0,0,0,1,0,2,0,0,0},
                                                        (int []){1,0,1,1,1,0,0,1,0,1,1,2,0},
                                                        (int []){1,0,1,1,0,0,0,1,0,0,0,2,0},
                                                        (int []){1,0,1,1,1,0,0,0,0,0,0,2,0},
                                                        (int []){1,0,2,1,0,0,0,0,0,0,0,2,1},
                                                        (int []){1,0,2,1,0,0,1,1,0,0,0,2,1},
                                                        (int []){0,0,2,1,0,0,1,0,1,1,0,2,0},
                                                        (int []){1,0,1,1,0,0,1,1,1,1,1,2,0},
                                                        (int []){1,0,1,2,0,0,1,1,1,0,1,2,1},
                                                        (int []){1,0,1,2,0,0,1,1,1,1,1,2,2},
                                                        (int []){1,0,1,1,1,0,0,1,1,4,1,3,0},
                                                        (int []){1,0,1,2,1,0,0,2,0,2,1,3,0},
                                                        (int []){1,0,1,1,0,0,0,0,1,3,0,3,0},
                                                        (int []){1,0,2,1,1,0,0,0,1,2,1,4,0},
                                                        (int []){1,0,1,2,0,0,1,1,1,1,0,4,0},
                                                        (int []){1,0,1,1,1,0,1,0,1,2,1,4,0},
                                                        (int []){1,1,2,2,2,0,1,2,1,2,1,4,0},
                                                        (int []){1,1,2,2,1,0,2,0,1,1,1,1,0},
                                                        (int []){0,1,2,3,1,0,1,1,0,2,1,1,0},
                                                        (int []){1,3,2,3,0,0,1,1,0,1,1,1,0},
                                                        (int []){1,3,2,2,0,0,1,0,0,2,1,4,1},
                                                        (int []){1,2,1,2,0,0,2,2,1,2,1,4,1},
                                                        (int []){0,2,1,1,0,0,2,2,1,2,0,4,0},
                                                        (int []){1,1,2,2,0,0,1,0,1,1,1,4,0},
                                                        (int []){1,2,1,2,0,0,1,0,1,1,1,2,0},
                                                        (int []){1,2,1,2,0,0,0,0,1,2,1,2,0},
                                                        (int []){1,1,2,2,1,0,0,1,1,2,1,2,0},
                                                        (int []){1,2,1,2,1,0,0,0,1,1,1,2,0},
                                                        (int []){1,2,1,2,0,0,0,0,1,1,1,2,0},
                                                        (int []){0,2,1,2,0,0,0,0,1,1,0,2,0},
                                                        (int []){1,1,1,2,0,0,0,0,1,1,0,2,0},
                                                        (int []){1,2,1,2,0,0,2,1,0,0,1,2,0},
                                                        (int []){1,1,1,2,1,0,0,0,1,2,0,0,0},
                                                        (int []){0,0,1,2,2,0,2,1,1,0,0,0,1},
                                                        (int []){0,1,0,3,2,0,3,0,0,0,1,0,0},
                                                        (int []){0,0,1,2,2,0,1,1,1,0,1,0,0},
                                                        (int []){0,0,1,1,2,0,3,0,0,0,1,0,0},
                                                        (int []){0,1,0,3,2,0,0,1,1,0,1,0,0},
                                                        (int []){0,1,0,3,2,0,2,0,1,0,1,0,1},
                                                        (int []){1,0,0,2,2,0,1,0,1,0,1,0,0},
                                                        (int []){0,0,0,2,1,0,3,1,1,0,1,0,0},
                                                        (int []){0,0,0,2,1,0,2,0,1,0,1,0,0},
                                                        (int []){0,0,1,3,1,0,1,1,0,0,1,0,0},
                                                        (int []){0,0,0,3,2,1,1,1,0,0,1,0,0},
                                                        (int []){0,2,1,3,2,2,3,2,1,0,1,0,0},
                                                        (int []){1,1,2,5,1,2,2,0,1,1,2,1,0},
                                                        (int []){0,2,1,4,1,3,1,0,0,0,2,1,0},
                                                        (int []){1,1,2,4,1,4,0,0,1,3,2,1,0},
                                                        (int []){1,1,1,3,1,5,0,1,0,2,1,1,0},
                                                        (int []){0,3,2,4,0,5,0,0,1,1,1,1,0},
                                                        (int []){1,2,2,3,0,5,0,0,1,1,1,1,0},
                                                        (int []){1,2,2,3,0,5,1,0,0,0,1,2,0},
                                                        (int []){0,3,2,3,0,5,1,1,0,1,1,2,0},
                                                        (int []){1,3,2,4,0,6,1,0,1,0,1,2,0},
                                                        (int []){1,3,2,4,0,5,2,0,1,1,1,2,1},
                                                        (int []){1,4,2,3,1,5,2,1,1,2,0,1,1},
                                                        (int []){0,2,2,3,1,5,2,0,1,3,1,2,1},
                                                        (int []){0,2,2,4,1,5,3,0,0,2,0,2,1},
                                                        (int []){1,2,2,4,1,5,1,0,1,1,1,2,1},
                                                        (int []){1,2,1,4,2,5,1,2,1,1,1,1,1},
                                                        (int []){0,3,1,3,1,5,1,2,2,2,1,1,1},
                                                        (int []){2,4,1,4,1,4,1,1,1,1,1,1,1},
                                                        (int []){2,3,1,4,1,6,0,0,1,1,1,1,1},
                                                        (int []){3,3,1,3,0,6,0,0,3,1,1,1,1},
                                                        (int []){3,3,1,3,1,6,0,0,2,2,1,1,1},
                                                        (int []){2,4,1,3,0,3,0,0,2,0,1,2,1},
                                                        (int []){3,5,1,3,0,3,0,0,3,2,1,2,1},
                                                        (int []){3,4,1,4,1,2,2,0,2,1,1,2,1},
                                                        (int []){4,4,1,4,2,5,0,1,1,1,0,1,1},
                                                        (int []){4,1,1,3,1,5,0,1,1,0,0,1,1},
                                                        (int []){3,2,1,10,1,5,1,0,0,5,1,1,1},
                                                        (int []){4,1,1,3,1,5,1,0,0,4,1,1,1},
                                                        (int []){0,1,0,3,0,5,0,0,0,3,1,1,1},
                                                        (int []){5,3,0,4,1,5,2,1,0,2,1,1,1},
                                                        (int []){5,2,0,3,0,3,1,0,0,1,1,1,1},
                                                        (int []){4,2,0,3,0,3,0,0,0,0,1,2,1},
                                                        (int []){0,3,1,3,1,3,0,1,0,0,1,2,1},
                                                        (int []){1,3,0,3,2,3,0,0,0,1,1,1,1},
                                                        (int []){1,3,1,3,1,3,0,2,0,0,1,1,1},
                                                        (int []){1,4,0,2,1,2,2,0,0,0,1,1,1},
                                                        (int []){1,2,0,1,1,2,2,0,0,1,0,1,1},
                                                        (int []){2,2,2,2,0,1,2,0,0,0,1,1,1},
                                                        (int []){2,2,1,4,1,3,1,0,0,1,0,1,1},
                                                        (int []){2,2,1,3,0,3,1,0,0,0,1,2,1},
                                                        (int []){2,3,1,5,0,1,1,1,1,0,1,1,1},
                                                        (int []){2,4,1,7,1,1,1,0,0,0,1,2,1},
                                                        (int []){2,3,2,7,2,5,1,0,1,0,1,1,1},
                                                        (int []){2,3,1,6,1,6,1,0,1,0,0,1,1},
                                                        (int []){2,3,2,6,1,1,0,0,1,0,0,2,1},
                                                        (int []){2,4,1,6,1,2,0,0,1,0,1,1,1},
                                                        (int []){2,5,1,5,0,4,0,0,1,0,1,2,1},
                                                        (int []){3,4,0,4,1,4,0,0,1,0,1,1,1},
                                                        (int []){3,4,0,4,0,2,1,1,0,0,0,2,1},
                                                        (int []){3,3,0,3,0,3,0,0,0,0,0,1,1},
                                                        (int []){3,2,0,2,1,2,0,0,0,0,0,1,1},
                                                        (int []){3,2,0,2,0,1,0,1,0,0,0,1,1},
                                                        (int []){3,2,0,1,1,1,0,0,0,0,0,1,1},
                                                        (int []){3,1,0,2,1,1,1,0,1,0,0,0,1},
                                                        (int []){3,1,0,2,1,2,1,0,1,0,1,0,1},
                                                        (int []){3,1,0,4,0,2,1,0,1,0,1,0,1},
                                                        (int []){0,1,0,3,1,2,0,0,1,0,1,0,1},
                                                        (int []){0,1,0,2,0,3,0,0,1,0,1,0,1},
                                                        (int []){1,1,0,2,0,1,0,0,0,0,0,0,1},
                                                        (int []){1,0,0,1,1,2,0,0,1,0,1,0,1},
                                                        (int []){1,0,1,1,0,2,0,0,0,0,0,0,1},
                                                        (int []){1,0,0,2,0,2,1,0,0,0,0,0,1},
                                                        (int []){0,0,1,2,0,0,1,0,0,0,0,0,1},
                                                        (int []){0,0,0,1,0,0,1,0,0,0,1,0,1},
                                                        (int []){0,0,0,1,0,0,2,0,0,0,1,0,1},
                                                        (int []){0,0,0,2,0,0,2,0,0,0,1,0,1},
                                                        (int []){0,0,0,2,0,1,2,0,0,0,1,0,1},
                                                        (int []){0,0,0,1,0,1,1,0,0,0,0,0,1},
                                                        (int []){0,0,0,1,0,1,1,0,0,0,0,0,1},
                               };
                               




                                              //        T  S  B  CC P  CL D  SM OUT
     int ** traslado = (int *[]) {
            (int []){1,1,1,1,1,2,1,2,1,1,1,1,1,0},
            (int []){0,1,1,1,1,2,0,1,1,1,1,1,1,1},
            (int []){1,0,1,1,1,0,1,1,1,1,1,0,1,1},
            (int []){1,2,0,1,0,2,1,1,0,2,0,2,2,1},
            (int []){1,1,1,0,1,2,0,1,1,1,1,1,1,1},
            (int []){1,1,0,0,0,1,0,1,0,1,0,1,1,1},
            (int []){1,1,2,2,1,0,1,1,2,1,1,1,1,2},
            (int []){1,1,1,0,1,2,0,1,1,1,1,1,1,1},
            (int []){1,1,1,1,0,1,1,0,1,1,1,0,0,1},
            (int []){1,1,0,1,0,2,1,1,0,1,1,1,1,1},
            (int []){1,1,1,0,1,1,1,1,1,0,1,0,0,1},
            (int []){1,3,0,1,0,1,1,1,1,1,0,2,2,1},
            (int []){1,0,2,1,1,1,1,0,1,0,2,0,1,1},
            (int []){1,1,1,1,1,1,1,0,1,1,1,1,0,1},

                                };




#endif /* DATOS2015_H */

