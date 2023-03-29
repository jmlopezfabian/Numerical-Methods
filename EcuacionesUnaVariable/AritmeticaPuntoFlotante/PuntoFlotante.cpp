//Representación de numeros binarios en punto flotante, representación de 32 bits

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int convertirBinDecimal(char* binario, int n);

int convertirBinDecimal(char* binario, int n){
    int decimal = 0;
    int potencia = 0;
    int i=0;

    for(int i=n-1; i>=0; i--){
        if(binario[i] == '1'){
            decimal += pow(2, potencia);
        }
        potencia++;
    }
    return decimal;
}

int main(){

    int opcion;
    char signo;
    char exponente[8];
    char mantisa[23];
    char binario[32];
    int exp_decimal;

    cout<<"1. Convertir de binario a punto flotante"<<endl;
    cout<<"2. Convertir de punto flotante a binario"<<endl;
    cin>>opcion;

    switch (opcion){
    case 1:
        cout<<"Convertir binario a punto flotante"<<endl;
        cout<<"Ingrese el numero binario: ";
        
        for (int i = 0; i < 32; i++){
            cin>>binario[i];
        }

        if(binario[0] == '0'){
            signo = '+';
        }else{
            signo = '-';
        }

        for(int i = 1; i < 9; i++){
            exponente[i-1] = binario[i];
        }
        for(int i = 9; i < 32; i++){
            mantisa[i-9] = binario[i];
        }
        cout<<"exponente: ";
        for(int i = 0; i < 8; i++){
            cout<<exponente[i];
        }
        cout<<size(exponente)<<endl;
        exp_decimal = convertirBinDecimal(exponente,8);
        //Convertir el string mantisa a entero
        cout<<"El numero normalizado es: "<<signo<<"1.";
        for(int i = 0; i < 23; i++){
            cout<<mantisa[i];
        }
        cout<<"*2^"<<exp_decimal-127<<endl;
    default:
        break;
    }
}