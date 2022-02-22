//programa que determina la minima cantidad de billetes neesarios para alcanzar una cantidad especifica
#include <iostream>

using namespace std;

void buscador(int valor);

int main(){
    int valor;
    cout<<"ingrese un valor"<<endl;
    cin>>valor;

    buscador(valor);
    return 0;
}

void buscador(int valor){ //funcion que recibe el valor y busca la combinacion
    int arreglo[10]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

    for(int i=0; i<10; i++){ // ciclo que tomará cada valor del arreglo
        int j = 0;
        while (valor- arreglo[i]>=0){  //ciclo que buscara la cantidad de billetes
            valor= valor-arreglo[i];
            j++;
        }
        cout<<arreglo[i]<<": "<<j<<endl;
    }
    cout<<"restante"<<valor<<endl;
}
