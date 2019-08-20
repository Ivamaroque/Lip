#include <iostream>

using namespace std;
void data (int a, int b, int c);
int main()
{
    int a, b, c;
    char aux;
    cout<<"Insira uma data nesse modelo: (01/01/2019)"<<endl;
    cin>>a>>aux>>b>>aux>>c;
    data(a,b,c);
    return 0;
}
void data (int a, int b, int c){
    if(a == 28 && b == 2){
        a = 01;
        b++;
    }
    else if(a == 31 && b == 1||a == 31 && b == 3||a == 31 && b == 5||a == 31 && b == 7||a == 31 && b == 8||a == 31 && b == 10){
        b++;
        a = 1;
    }
    else if(a == 30 && b == 4||a == 30 && b == 6||a == 31 && b == 9||a == 31 && b == 11){
        b++;
        a = 1;
    }
    else if(a == 31 && b ==12){
        b = 1;
        a = 1;
        c++;
    }
    else{
        a++;
    }
    cout<<a<<"/"<<b<<"/"<<c<<endl;
}

