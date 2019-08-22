#include <iostream>

using namespace std;
bool multiplo (int a, int b);
int main()
{
    int a, b;
    cout<<"Insira o valor de a: ";
    cin>>a;
    cout<<"Insira o valor de b: ";
    cin>>b;
    cout<<"Sao multiplos? "<<multiplo(a, b)<<endl;
    return 0;
}
bool multiplo(int a, int b){
    bool teste = 0;
    if(b%a == 0){
        teste = 1;
    }
    return teste;
}
