#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    cout<<"Insira o valor de a: ";
    cin>>a;
    cout<<"Insira o valor de b: ";
    cin>>b;
    cout<<"o valor de a antes é: "<<a<<endl;
    cout<<"o valor de b antes é: "<<b<<endl;
    aux = a;
    a = b;
    b = aux;
    cout<<"o valor de a depois é: "<<a<<endl;
    cout<<"o valor de b depois é: "<<b<<endl;
    return 0;
}
