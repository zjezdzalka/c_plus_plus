#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i = 2;i<=sqrt(n);++i){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int i;
	int temp = 3;
	int a; 
	for(i=0;i<n;++i){
		a = temp;
		temp ++; 
		bool def = false;
		while(!isPrime(temp) || temp%2==0){
			temp ++;
		}
		cout<<"Liczba "<<i+1<<" w ciagu to: "<<(a+temp)/2<<"\n";
	}
	return 0;
}