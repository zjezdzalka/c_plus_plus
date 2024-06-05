#include<iostream>
#include<cmath>
using namespace std;
bool checkPrime(long long a){
	for(int i=2;i<sqrt(a);++i){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	cout<<"1^3 == 1\n";
	for(int i=1;i<=100;++i){
		long long temp = pow(i+1,3) - pow(i,3);
		cout<<"Roznica: "<<temp<<" | "<<checkPrime(temp)<<"\n";
		cout<<i+1<<"^3 == "<<pow(i+1,3)<<"\n";
	}
}