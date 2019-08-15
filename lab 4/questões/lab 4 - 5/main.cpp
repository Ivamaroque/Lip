#include <iostream>
#include <cmath>
using namespace std;
float volume(float r);
int main()
{
    float r, vol;
    cout<<"Insira o raio: ";
    cin>>r;
    vol = volume(r);
    cout<<"Seu volume eh: "<<vol<<endl;
    return 0;
}
float volume(float r){
    float v;
    v =(4/3)*3.14*pow(r,3);
    return v;
}
