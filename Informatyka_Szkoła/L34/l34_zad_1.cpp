#include<iostream>
using namespace std;
int main(){
	int i=2;
	int n;
	cin>>n;
	while(n>1){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
		i++;
	}
}