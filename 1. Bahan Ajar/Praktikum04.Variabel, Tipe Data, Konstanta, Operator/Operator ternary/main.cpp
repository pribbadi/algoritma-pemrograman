#include <iostream>
using namespace std;
int main()
{
    int x, y , z ;
    x = 5;
    y = 6;
    z = (x < y) ? x : y;
    cout<<"\nNilai Bilangan x = "<<x;
    cout<<"\nNilai Bilangan y = "<<y<<endl;
    cout<<"=====================================";
    cout<<"\nNilai yang lebih kecil adalah = "<< z;
    return 0;
}
