#include <iostream>

using namespace std;
bool parimpar(int a);
int main()
{
    int n, a, teste;
    cout<<"Insira a quantidade de valores que serao inseridos: ";
    cin>>n;
    for(int i = 1; i <= n;i++){
        cout<<"Insira o seu valor: ";
        cin>>a;
        teste = parimpar(a);
        if(teste == 1){
            cout<<"Seu numero eh par"<<endl;
        }
        else{
            cout<<"Seu numero eh impar"<<endl;
        }
    }
    return 0;
}
bool parimpar(int a){
    bool teste = 0;
    if(a%2 == 0){
        teste = 1;
    }
    return teste;
}
