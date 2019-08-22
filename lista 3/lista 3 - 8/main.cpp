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
    for(int i = 1; i <= x; i++){
        if(i == 1){
            for(int j = 0; j < x; j++){
                cout<<"# ";
            }
        }
        else if(i == x){
            for(int j = 0; j < x; j++){
                cout<<"# ";
            }
        }
        else{
            for(int j = 1; j<= x;j++){
                if(j == 1){
                    cout<<"# ";
                }
                else if(j == x){
                    cout<<"# ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}
