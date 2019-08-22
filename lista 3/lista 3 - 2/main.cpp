#include <iostream>
#include <cmath>
using namespace std;
double hipotenusa (float ca, float co);
int main()
{
    float ca, co;
    cout<<"Insira o primeiro lado do triangulo: ";
    cin>>ca;
    cout<<"Insira o segundo lado do triangulo: ";
    cin>>co;
    cout<<"A hipotenusa eh: "<<hipotenusa(ca,co)<<endl;
    return 0;
}
double hipotenusa(float ca, float co){
    double qca =pow(ca, 2);
    double qco = pow(co, 2);
    double hipotenusa = sqrt(qca+qco);
    return hipotenusa;
}
