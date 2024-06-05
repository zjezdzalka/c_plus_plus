#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long suma = 0;
	int ile = 0;
	int i;
	for(i=1;i<sqrt(n);++i){
		if(n%i==0){
			suma += i;
			suma += n/i;
			ile ++;
		}
	}
	if(i*i == n){
		suma += i;
		ile++;
	}
	if((suma/ile) * ile == suma){
		cout<<"Liczba "<<n<<" jest liczba arytmetyczna.\n";
	}
	else{
		cout<<"Liczba "<<n<<" nie jest liczba arytmetyczna.\n";
	}
	return 0;
}