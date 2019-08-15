#include <iostream>

using namespace std;

int main()
{
    float termo, razao, total;
    int i;
    cout<<"Insira o termo da progressao: ";
    cin>>termo;
    cout<<"Insira o valor da razao: ";
    cin>>razao;
    total = termo;
    i = 0;
    while(total < 200){
        total = total*razao;
        i +=1;
        if(total < 200){
            cout<<"O valor da "<<i<<"a PG eh: "<<total<<endl;
        }
    }

    return 0;
}
