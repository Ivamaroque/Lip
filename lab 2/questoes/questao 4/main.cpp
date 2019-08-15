#include <iostream>

using namespace std;

int main()
{
    int nhoras, dias, horas;
    cout<<"Insira o valor total de horas: ";
    cin>>nhoras;
    dias = nhoras/24;
    horas = nhoras%24;
    cout<<nhoras<< " horas = "<<dias<<" dias e "<<horas<< " horas.";
    return 0;
}
