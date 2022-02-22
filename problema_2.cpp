// prgrama que genera un arreglo de 100 caracteres y dice cuantas veces estan repetidos estos caracteres
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    //Declaracion de variables
    char a,array[100]={},array1[26]={};
    int cont=0,acu=0;
    //Ciclo para crear el arreglo con letras aleatorias
    for(int i=0;i<100;i++)
    {
        a = 65 + rand() % ((90+1)-65);
        array[i]=a;
    }
    cout<<array<<endl;
    //ciclo para generar arreglo con letras de 'A' a la 'Z' sin repetir y ordenadamente.
    for(int n=65;n<=90;n+=1)
        array1[n-65]=char(n);
    //Ciclo para comparar cada elemento de array1 con todos de array, contar cada elemento e imprimirlo.
    for(int j=0;j<26;j+=1)
    {
        cont=0;
        for(int i=0;i<100;i+=1)
        {
            if(array1[j]==array[i])
                cont+=1;
        }
        cout<<"Hay "<<cont<<" letras iguales a "<<array1[j]<<endl;
        acu+=cont;
    }
    cout<<"Suma: "<<acu<<endl;

}