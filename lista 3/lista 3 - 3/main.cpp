#include <iostream>

using namespace std;
int pot (int x, int y);
int main()
{
    int x, y, total, totalaux;
    cout << "Insira o valor de X: ";
    cin>>x;
    cout << "Insira o valor de Y: ";
    cin>>y;
    cout<<"a potencia eh: "<<pot(x,y)<<endl;
    return 0;
}
int pot (int x, int y){
    int total = x;
    if(y == 0){
        total = 1;
    }
    else{
        for(int i = 2; i <= y;i++){
            total = total*x;
        }
    }
    return total;
}

