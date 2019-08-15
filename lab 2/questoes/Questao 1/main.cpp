#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 1.5, e = 1.2, f = 4.3;
    float b = 4, c = 2, d = 3;
    float resultado1, resultado2, resultado3, resultado4;
    resultado1 = (a*(c+d))/(b*(e+f));
    resultado2 = (a+(pow(c+d, 2)/pow(b, 2))*d)*(1/c);
    resultado3 = (pow(a,b+c)/(e+f))+d;
    resultado4 = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
    cout<<"r1 é: "<<resultado1<<"\nr2 é: "<<resultado2<<endl;
    cout<<"r3 é: "<<resultado3<<"\nr4 é: "<<resultado4;
    return 0;
}
