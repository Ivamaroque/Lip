#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, valor;
    cout<<"Insira o valor de X: ";
    cin>>x;
    if(x <= 1){
        valor = 1;
    }
    else if (x <= 2){
        valor = 2;
    }
    else if (x <= 3){
        valor = pow(x, 2);
    }
    else {
        valor = pow(x, 3);
    }
    cout<<"O valor de f(x) é: "<<valor;
    return 0;
}
