#include <iostream>

using namespace std;

int main()
{
    int x, y, xf;
    cout<<"Insira o valor de X: ";
    cin>>x;
    cout<<"Insira o valor de Y: ";
    cin>>y;
    xf = x%1000;
    if(y == xf){
        cout<<"Y representa os ultimos digitos de X."<<endl;
    }
    else{
        cout<<"Y nao representa os ultimos digitos de X."<<endl;
    }
    return 0;
}
