#include <iostream>

using namespace std;

int main()
{
    float comissao, subtotal, total, valor;
    cout<<"Insira o valor da conta: "<<endl;
    cin>>valor;
    comissao = valor*0.1;
    subtotal = valor;
    total = comissao+subtotal;
    cout<<"Subtotal: "<<subtotal<<"\nComissao: "<<comissao<<"\nTotal: "<<total;
    return 0;
}
