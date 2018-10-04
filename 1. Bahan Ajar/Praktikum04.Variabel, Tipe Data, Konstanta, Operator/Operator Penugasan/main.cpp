#include <iostream>
using namespace std;
int main()
{
    int x=8,y=10,a,b,c,d,e,f;
    a=x;
    cout<<"a=x hasilnya "<<a<<endl;
    b=(x+=y);
    cout<<"b+=y hasilnya "<<b<<endl;
    c=(x-=y);
    cout<<"c-=y hasilnya "<<c<<endl;
    d=(x*=y);
    cout<<"d*=y hasilnya "<<d<<endl;
    e=(x/=y);
    cout<<"e/=y hasilnya "<<e<<endl;
    f=(x%=y);
    cout<<"f%=y hasilnya "<<f<<endl;
    string o="Te",p="Pe",g;
    g=(o.=p);
    cout<<"o.=p hasilnya "<<g<<endl;
    return 0;
}
