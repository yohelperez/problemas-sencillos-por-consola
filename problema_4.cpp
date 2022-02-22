//programa que convierte una cadena de caracteres a enteero
#include <iostream>
#include <fstream>

using namespace std;
void convert(); 
int main(){

    convert();
}

//funcion que convierte  cadena a entero
void convert(){
     char num[100]={}; //cadena de caracteres
     int i=0, num1;
     cout<<"ingrese un numero"<<endl;
     cin>>num;
     
     while(num[i]!= '\0'){ //ciclo que ira convirtiendo cada caracter a entero
                    num1= num[i]-48;
                    cout<<num1;
                    i++;
     }
}             
