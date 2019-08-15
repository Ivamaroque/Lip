#include <iostream>

using namespace std;

int main()
{
    int n, ni, nf, e, ei, ef, total;
    cout<<"Insira o valor de ni: ";
    cin>>ni;
    cout<<"Insira o valor de nf: ";
    cin>>nf;
    cout<<"Insira o valor de ei: ";
    cin>>ei;
    cout<<"Insira o valor de ef: ";
    cin>>ef;
    for(n = ni; n <= nf; n++){
        total = n;
        for(e = ei; e <= ef; e++){
            if(e == 0){
                total = 1;
            }
            else if(e == 1){
                total = n;
            }
            else{
                total = total*n;
            }
        }
        cout<<"O valor de "<< n <<" elevado a "<<ef<<" eh: "<<total<<endl;
    }
    return 0;
}
