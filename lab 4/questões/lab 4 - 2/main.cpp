#include <iostream>

using namespace std;
char ch(char c);
int main()
{
    char c;
    bool vf;
    cout<<"Insira a vogal: ";
    cin>>c;
    vf = ch(c);
    cout<<vf;
    return 0;
}

char ch(char c){
    bool vf = false;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vf = true;
    }
    return vf;
}
