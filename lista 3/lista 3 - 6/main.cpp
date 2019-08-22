#include <iostream>

using namespace std;
void quadrado(int x);
int main()
{
    int x;
    cin>>x;
    quadrado(x);
    return 0;
}
void quadrado(int x){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
