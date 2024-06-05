#include<iostream>
using namespace std;
int main(){
	int i=2;
	int n, potega=0;
	cin>>n;
	while(n>1){
		potega = 0;
		if(n%i==0){
			cout<<i<<"^";
			while(n%i==0){
				potega++;
				n/=i;
			}
			cout<<potega<<" ";
		}
		i++;
	}
}