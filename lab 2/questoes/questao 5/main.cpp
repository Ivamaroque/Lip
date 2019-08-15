#include <iostream>

using namespace std;

int main()
{
    int CDU, U, C, D;
    cout<<"Insira o valor de CDU: ";
    cin>>CDU;
    U = CDU%10;
    D = (CDU%100)/10;
    C = CDU/100;
    cout<<U<<C<<D;
    return 0;
}
