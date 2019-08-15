#include <iostream>

using namespace std;

int main()
{
    int i=1, j=2, k=3, n=2;
    float x=3.3, y=4.4;
    float a, b, c, d, e, f, g, h, ii, jj, kk, l, m, nn, o, p;
    a = i < j + 3;
    b = 2 * i - 7 <= j - 8;
    c = -x + y >= 2.0 * y;
    d = x == y;
    e = x != y;
    f = i + j + k == -2 * -k;
    g = !(n-j);
    h = !n-j;
    ii = !x*!x;
    jj = i && j && k;
    kk = i || j-3 && 0;
    l = i<j && 2 >=k;
    m = i<j || 2>=k;
    n = i==2 || j==4 || k==5;
    o = i=2 || j==4 || k==5;
    p = x <=5.0 && x!=1.0 || i>j;

    cout<<"a)"<<a<<"\nb)"<<b<<"\nc)"<<c<<"\nd)"<<d<<"\ne)"<<e<<endl;
    cout<<"f)"<<f<<"\ng)"<<g<<"\nh)"<<h<<"\ni)"<<ii<<"\nj)"<<jj<<endl;
    cout<<"k)"<<kk<<"\nl)"<<l<<"\nm)"<<m<<"\nm)"<<n<<"\no)"<<o<<"\np)"<<p<<endl;
    return 0;
}
