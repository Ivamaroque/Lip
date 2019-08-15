#include <iostream>

using namespace std;

int main()
{
    int x, y, total, totalaux;
    cout << "Insira o valor de X: ";
    cin>>x;
    cout << "Insira o valor de Y: ";
    cin>>y;
    total = x;
    for(int i = 2; i <= y;i++){
        totalaux = total;
        for(int j = 1; j < x; j++){
            total = total+totalaux;
        }
    }
    cout<<total;
    return 0;
}
