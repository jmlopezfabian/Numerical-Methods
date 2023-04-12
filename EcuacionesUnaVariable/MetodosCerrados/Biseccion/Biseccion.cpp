#include <iostream>
#include <math.h>

using namespace std;

double f(double x){
    return (pow(x,3) + 4 * pow(x,2) - 10 );
}

double metodoBiseccion(double (*f)(double),double a, double b, double tol, int n){
    int p = 0, i;
    
    if( (f(a) * f(b)) > 0){
        cout<<"No hay raiz en el intervalo";
        return 0;
    }else{
        for(i = 0; i<n; i++){
            p = (a+b) / 2;
            if(f(p) == 0){
                return p;
            }
            else if(f(a) * f(p) < 0){
                b = p;
            }else{
                a = p;
            }
            if(abs(f(p)) < tol){
                break;
            }
        }
        cout<<"Solucion aproximada: "<<p<<endl;
        cout<<"Numero de iteraciones: "<<i<<endl;
    }
    return 0;
}

int main(){
    double a = metodoBiseccion(f,1,2,0.001,100);
    return 0;
}