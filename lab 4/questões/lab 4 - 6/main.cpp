#include <iostream>

using namespace std;
void ponto(float iex, float iey, float x, float y, float px, float py);
int main()
{
    float iex, iey, x, y, px, py;
    char aux;
    cout<<"Insira o ponto inferior esquerdo do retangulo, como no exemplo: 0,0"<<endl;
    cin>>iex>>aux>>iey;
    cout<<"Insira a largura (x) e altura (y) dele, como no exemplo: 2,4"<<endl;
    cin>>x>>aux>>y;
    cout<<"Insira o ponto para verificar se ele esta no retangulo, como no exemplo: 1,3"<<endl;
    cin>>px>>aux>>py;
    ponto(iex,iey,x,y,px,py);
    return 0;
}
void ponto(float iex, float iey, float x, float y, float px, float py){
    if(py <= y+iey && py >= iey || py >= y-iey && py <= iey){
        if(px <= x+iex && py >= iex || px >= x-iex && py <= iex){
            cout<<"O ponto ("<<px<<","<<py<<") esta dentro do retangulo."<<endl;
        }
        else{
            cout<<"O ponto ("<<px<<","<<py<<") nao esta dentro do retangulo."<<endl;
        }
    }
    else{
            cout<<"O ponto ("<<px<<","<<py<<") nao esta dentro do retangulo."<<endl;
    }
}
