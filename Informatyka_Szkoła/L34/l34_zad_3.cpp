#include <iostream>
using namespace std;
int main(){
	double skladka = 100.0;
	double prowizja = 0.1;
	double dochodowosc = 0.05;
	int ile_lat;
	cout<<"Podaj ile lat: ";
	cin>>ile_lat;
	double kapital = 0;
	int i;
	for(i=0; i<12*ile_lat; i++){
		kapital = kapital * (1.0 + dochodowosc / 12.0);
		kapital = kapital + skladka * (1.0 - prowizja);
	}
	cout<<"suma wplaconych skladek: " << skladka * 12 * ile_lat;
	cout<<"\nkapital koncowy = " << kapital <<"\n";
}