#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
void menu_principal ();
void leer_seleccion(int &opt);
void printVector(int myVector[], int size);
void printVector2(double myVector[], int size);
void scanVector(int myVector[], int size);
void suma_vectores(int vector1[3],int vector2[3],int *ptr);
void resta_vectores(int vector1[3],int vector2[3],int *ptr);
void producto_punto(int myVector[3],int myVector2[3],int size);
float norma (int myVector[],int size);
float producto_escalar(int myVector[], int myV2[],int size);
void producto_punto(int myVector[3],int myVector2[3],int size);
void uno(int vector1[3], int *ptr, double *ptr2);
int main(){int opt;
float n,e;
char rep;

int a[3] = {0,0,0};int *ptra = &a[0];
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
double cf[3] = {0.0,0.0,0.0};
int *ptrC = &c[0];
double *ptrCf = &cf[0];
scanVector(a,3);
scanVector(b,3);
printf("----Vector 1----\n");
printVector(a,3);
printf("----Vector 2----");
printVector(b,3);
do{
menu_principal ();
leer_seleccion(opt);
switch(opt){
    case 1:
    suma_vectores(a,b,ptrC);
    printf("\n vector 1 suma \n");
    printVector(c,3);
    break;

    case 2:
    resta_vectores(a,b,ptrC);
    printf("\n vector 1 resta \n");
    printVector(c,3);
    break;

    case 3:
    n = norma(a,3);
    printf("\n norma con raiz vector 1 %f \n",n);
    break;

    case 4:
    printf(" \n producto punto del vector");
    producto_punto(a,b,3);
    break;

    case 5:
    printf("\n \n producto escalar del vector ");
    e = producto_escalar(a,b,3);
    printf(" \n producto escalar del vector con raiz: %f ",e);
    break;

    case 6:
    printf("\n \n vector unitario del vector \n");
    uno(a,ptra,ptrCf);
    break;
    default:
    printf("La opcion introducida es invalida\n");
    break;
}
printf("Si desea ralizar otra operación oprima s\n");
rep = getch();}
while((rep=='S') || (rep=='s'));
}
void printVector(int myVector[],int size){
for (int i=0; i<size; i++){
printf("vector[%d]: %d\n",i,myVector[i]);}}
void scanVector(int myVector[],int size){for (int i=0; i<size; i++){
int valor;
printf("vector[%d]: \n",i);
scanf("%d",&valor);
myVector[i] = valor;
}
}
void printVectorF(double myVector[],int size){
for (int i=0; i<size; i++){
printf("vector[%d]: %d\n",i,myVector[i]);
}
}
void suma_vectores(int vector1[3], int vector2[3],int *ptr){
for(int i = 0; i<3; i++){
*(ptr+i) = vector1[i] + vector2[i];
}
}
void resta_vectores(int vector1[3], int vector2[3],int *ptr){
for(int i = 0; i<3; i++){*(ptr+i) = vector1[i] - vector2[i];
}
}
float norma (int myVector[3],int size){
float suma=0.0;
for(int i = 0; i<=size; i++){
suma += myVector[i]*myVector[i];
}
printf(" norma sin raiz %f",suma);
return sqrt(suma);
}
void producto_punto (int myVector[3],int myVector2[3],int size){
float suma=0.0;
for(int i = 0; i<=size; i++){
suma += myVector[i]*myVector2[i];
}
printf(" \n la suma producto punto es: %f", suma);
}
float producto_escalar (int myVector[3], int myVector2[3],int size){
float suma=0.0;
for(int i = 0; i<=size; i++){
suma += myVector[i]*myVector[i] +myVector2[i]*myVector2[i];}
printf(" \n la raíz de %f",suma);
return sqrt(suma);
}
void uno(int vector1[3],int *ptr, double *ptr2){
float suma=0.0;
for(int i = 0; i<3; i++){
suma += vector1[i]*vector1[i];
}
float r = sqrt (suma);
printf(" El vector unitario es: %f \n a la menos uno 1/%f = %f \n",r,r,1/r);
for(int i = 0; i<3; i++){(ptr2+1) = *(ptr+i) 1/r;
printf(" el vector unitario: %d * 1/%f ",vector1[i],1/r);
printf (" = %f \n",*(ptr2+1) );
}
printf("\n");
}
void menu_principal(){
printf("------BIENVENIDO------\n\n");
printf("------Calculadora de Vectores------\n\n");
printf("1. Suma de Vectores\n");
printf("2. Resta de Vectores\n");
printf("3. norma\n");
printf("4. Producto Punto\n");
printf("5. Producto Escalar\n");
printf("6. Vector Unitario\n");
printf("----1AV6,ICA, ESMIEZ,DRSS----\n");
}
void leer_opcion(int& opt)
{printf("Introduzca el numero de la opcion deseada\n");
scanf("%d",&opt);
}
