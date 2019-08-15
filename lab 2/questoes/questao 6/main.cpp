#include <iostream>

using namespace std;

int main()
{
    int nminutos, dias, horas, minutos;
    cout<<"Insira o valor dos minutos: ";
    cin>> nminutos;
    dias = nminutos/1440;
    horas = (nminutos%1440)/60;
    minutos = nminutos%60;
    cout<<nminutos<< " minutos = "<<dias<<" dias, "<<horas<< " horas e "<<minutos<<" minutos.";
    return 0;
}
