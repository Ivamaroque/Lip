#include <iostream>

using namespace std;

int main()
{
    float massa, peso;
    int numP;
    cout<<"Insira a masssa: ";
    cin>>massa;
    cout<<"Insira o numero do planeta: ";
    cin>>numP;
    switch(numP){
        case 1:{
            peso = massa*0.37;
            cout<<"o peso no planeta de Mercurio � "<<peso<<"kg";
            break;
        }
        case 2:{
            peso = massa*0.88;
            cout<<"o peso no planeta de Venus � "<<peso<<"kg";
            break;
        }
        case 3:{
            peso = massa*0.38;
            cout<<"o peso no planeta de Marte � "<<peso<<"kg";
            break;
        }
        case 4:{
            peso = massa*2.64;
            cout<<"o peso no planeta de Jupiter � "<<peso<<"kg";
            break;
        }
        case 5:{
            peso = massa*1.15;
            cout<<"o peso no planeta de Saturno � "<<peso<<"kg";
            break;
        }
        case 6:{
            peso = massa*1.17;
            cout<<"o peso no planeta de Urano � "<<peso<<"kg";
            break;
        }
    }
    return 0;
}
