#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    cout<<"Insira o valor de a: ";
    cin>>a;
    cout<<"Insira o valor de b: ";
    cin>>b;
    cout<<"o valor de a antes �: "<<a<<endl;
    cout<<"o valor de b antes �: "<<b<<endl;
    aux = a;
    a = b;
    b = aux;
    cout<<"o valor de a depois �: "<<a<<endl;
    cout<<"o valor de b depois �: "<<b<<endl;
    return 0;
}
