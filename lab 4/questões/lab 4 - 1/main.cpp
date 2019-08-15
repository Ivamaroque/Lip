#include <iostream>

using namespace std;
float cambio (float r, char d, char p);
int main()
{
    float r, valor;
    char d, p;
    cout<<"Insira o valor da moeda: ";
    cin>>r;
    cout<<"Insira o tipo de moeda: ";
    cin>>d;
    cout<<"Insira para qual moeda vai converter: ";
    cin>>p;
    valor = cambio(r, d, p);
    cout<<"Seu valor convertido eh: "<<valor<<endl;
    return 0;
}
float cambio (float r, char d, char p){
    float valor;
    if(d == 'd'){
        switch(p){
            case 'r':
                valor = r*3.52;
                break;
            case 'p':
                valor = r*15.2;
                break;

        }
    }
    if(d == 'p'){
        switch(p){
            case 'd':
                valor = r/15.2;
                break;
            case 'r':
                valor = r*0.2;
                break;
        }
    }
    if(d == 'r'){
        switch(p){
            case 'p':
                valor = r/0.2;
                break;
            case 'd':
                valor = r/3.52;
                break;
        }
    }
    return valor;
}
