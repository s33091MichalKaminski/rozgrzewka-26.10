#include <iostream>
using namespace std;

int main()
{
   int kawalki;
   int pizza;
   int ilosc;
   int uczestnicy;
   int gosp;
   cout<<"podaj liczbe gosci"<<endl;
   cin>>uczestnicy;
   cout<<"podaj liczbe pizz"<<endl;
   cin>>pizza;
   kawalki=pizza*8;
   ilosc = kawalki/uczestnicy;
   gosp=kawalki-(ilosc*uczestnicy);
   cout<<"kazdy gosc dostanie "<<ilosc<<" kawalki pizzy, a gospodarz dostanie "<<gosp<<endl;


    return 0;
}
