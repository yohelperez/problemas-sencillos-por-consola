//programa que le permite al usuario generar un cuadro y comprueba si es o no un cuadro magico
#include <iostream>
using namespace std;
int main(){

    int array[8]={}, i=0; char letra=97; bool ban=false;
    cout<<"a b c"<<endl<<"d e f"<<endl<<"g h i"<<endl;

    while ( i<9){ //ciclo para llenar la matriz
        cout<<"ingrese un valor para "<<letra<<endl;
        cin>>array[i];
        letra++;
        i++;
    }

    cout<<array[0]<<array[1]<<array[2]<<endl;
    cout<<array[3]<<array[4]<<array[5]<<endl; // impresion de la matriz
    cout<<array[6]<<array[7]<<array[8]<<endl;
    
    i=array[0]+array[1]+array[2]; // valor al que la suma de filas, columnas y diagonal deben ser igual

    if ((array[0]+array[1]+array[2])==i){ //evaluacion de la igualdad 
        if ((array[3]+array[4]+array[5])== i){
            if ((array[6]+array[7]+array[8])==i){
                if ((array[0]+array[3]+array[6])==i){
                    if ((array[1]+array[4]+array[7])== i){
                        if ((array[2]+array[5]+array[8])==i){
                            if ((array[0]+array[4]+array[8])==i)ban=true;
                        }
                    }
                }
            }
        }
    }    
    
    if (ban==true)cout<<"Es un cuadro magico!"<<endl; //impresion de resultados
    else cout<<"No es un cuadro magico"<<endl;
}

