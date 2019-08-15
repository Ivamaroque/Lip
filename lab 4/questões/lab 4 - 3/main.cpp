#include <iostream>

using namespace std;
void tabuada(int num);
int main()
{
    int x;
    cout<<"Insira o valor da tabuada: ";
    cin>>x;
    tabuada(x);
    return 0;
}

void tabuada (int num){
    int cal;
    cout<<"tabuada do "<< num <<" eh: "<<endl;
    for(int i = 0; i <= 10; i++){
        cal = (i*num);
        cout<<num<<"*"<<i<<" = "<<cal<<endl;
    }
}
