#include <iostream>
#include <cmath>
using namespace std;
float volume(int r);
int main()
{
    float r, resultado;
    cout<<"Insira o raio da esfera: ";
    cin>>r;
    resultado = volume(r);
    cout<<"O volume do seu raio eh: "<<resultado<<"cm^3"<<endl;
    return 0;
}
float volume(int r){
    float resultado = (4*3.14*pow(r,3))/3;
    return resultado;
}
