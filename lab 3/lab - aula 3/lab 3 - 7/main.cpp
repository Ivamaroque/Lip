#include <iostream>

using namespace std;

int main()
{
    int n, m, cont;
    do{

        cout<<"Insira o valor de N: ";
        cin>>n;
        cout<<"Insira o valor de M: ";
        cin>>m;
        cont = m;
        cout<<"Contagem: ";
        while(cont <= n){
            cout<<cont<<" ";
            cont++;
        }
        if( n < m){
            while(cont >= n){
            cout<<cont<<" ";
            cont--;
            }
        }
        cout<<"| Fim da contagem."<<endl;
    }while(n!= m);
    return 0;
}
