#include <iostream>

using namespace std;

int main()
{
    int n, i, cont;
    bool primo;
    cout<< "Insira o valor de n: ";
    cin>>n;
    i = 1;
    cont = 1;
    while(cont<=n){
    primo = true;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                primo = false;
                break;
            }
        }
    if(primo == true){
        cout<<i<<" ";
        cont++;
    }
    i++;
    }
    return 0;

}
