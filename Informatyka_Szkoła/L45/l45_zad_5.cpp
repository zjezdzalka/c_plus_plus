#include<iostream>
using namespace std;
int main(){
	int p,n;
	cin>>p>>n;
	char ciag[n+1];
	for(int i = 0;i<n;++i){
		cin>>ciag[i];
	}
	long long sum = 0;
	for(int i=0;i<n;++i){
		sum = (sum * p) + int(ciag[i] - 48);
	}
	cout<<sum;
	return 0;
}