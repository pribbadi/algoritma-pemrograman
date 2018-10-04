#include <iostream>
using namespace std;
int main()
{
    int usia;
    cout<<"Masukkan usia : ";
    cin>>usia;
    if (usia<17){
        cout << "Mainnya ke taman saja ya!" << endl;
    } else if (usia>=17 && usia<=55) {
        cout << "Kuy ke bioskop!" << endl;
    } else{
        cout << "perbanyak istirahat";
    }
    return 0;
}
