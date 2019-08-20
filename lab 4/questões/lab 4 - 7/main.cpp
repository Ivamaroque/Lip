#include <iostream>
#include <cmath>
using namespace std;
void pot (int n);
int main()
{
    int n;
    cout<<"Insira n: ";
    cin>> n;
    pot(n);
    return 0;
}
void pot (int n){
    int cal = 1;
    int i = 0;
    int calaux;
    while(cal < n){
        cal = pow(2,i);
        i++;
        if(cal <= n){
            calaux = cal;
        }
    }
    cout<<"a potencia de 2 menor ou igual mais proxima eh: "<<calaux;
}
