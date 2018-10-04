#include <iostream>
using namespace std;
int main(){
     int NH;
     cout<<"Masukkan satu nomor hari (1 s/d 7) : ";
     cin>>NH;
     switch(NH){
          case 1:
               cout<<"\nHari ke-"<<NH<<" adalah SENIN";
               break;
          case 2:
               cout<<"\nHari ke-"<<NH<<" adalah SELASA";
               break;
          case 3:
               cout<<"\nHari ke-"<<NH<<" adalah RABU";
               break;
          case 4:
               cout<<"\nHari ke-"<<NH<<" adalah KAMIS";
               break;
          case 5:
               cout<<"\nHari ke-"<<NH<<" adalah JUMAT";
               break;
          case 6:
               cout<<"\nHari ke-"<<NH<<" adalah SAPTU";
               break;
          case 7:
               cout<<"\nHari ke-"<<NH<<" adalah MINGGU";
               break;
          default:
               cout<<"\nTidak terdapat nama hari ke-"<<NH;
               cout<<"\nMungkin Kamu Kurang Piknik";
     }
     return 0;
}
