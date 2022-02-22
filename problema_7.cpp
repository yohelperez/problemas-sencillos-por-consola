//programa que recibira una cadena de caracteres y eliminara los caracteres repetidos

#include <iostream>
using namespace std;

int arreglos(char valor,char array2[100]);
int main()
{
    //Declaracio de variables necesarias
    bool key;
    int cont=0,lonaux=0;
    char cadena[100]={},valor;
    cout<<"Ingrese una cadena de caracteres: "<<endl;
    cin>>cadena;
    //ciclo que me dira la longitud de el arreglo ingresada
    while(cadena[cont]!='\0')cont+=1;
    //arreglo donde guardare los elementos de el arreglo pero no repetidos
    char aux[cont]={};
    //ciclo principal para crear el arreglo con los elementos no repetidos
    for(int n=0;n<cont;n+=1)
    {
        valor=cadena[n];
        //variable para comprobar si un elemento de el arreglo ingresado esta en el arreglo nuevo
        key=arreglos(valor,aux);
        //utilizando la funcion esta variable guarda true o false
        //si es false significa que un elemento de el arreglo ingresado no esta en el arreglo creado
        if(key==false){
            aux[lonaux]=cadena[n];
            lonaux+=1;
        }
    }
    cout<<"Original: "<<cadena<<endl<<"Sin repetidos: "<<aux<<endl;
}
//funcion para comprobar si un elemento esta en un arreglo retorna true si esta y false de lo contrario.
int arreglos(char valor,char array2[100])
{
    int cont=0;
    //ciclo while para calcular la longitud de array2.
    while(array2[cont]!='\0')cont+=1;
    for(int n=0;n<cont;n+=1)
    {
        if(valor==array2[n])return true;
    }
    return false;
}
