#include <iostream>
#include <cmath>
using namespace std;
double serie(float x);
int main()
{
    float x;
    cout<<"Insira x: ";
    cin>>x;
    cout<<serie(x)<<endl;
    return 0;
}
double serie(float x){
    double soma = 0.0;
    float n = 1.0;
    float termo = 4.0/n;
    int i = 1;
    while(termo > 0.0001){
        if(i%2 == 1){
            soma += termo;
        }
        else{
            soma -= termo;
        }
        i++;
        n+=2;
        termo = pow(x,n)/n;
    }
    return soma;
}
