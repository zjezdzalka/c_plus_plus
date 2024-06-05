#include<iostream>
using namespace std;
int main(){
	int n, sum=0;
	for(cin>>n;n>0;n/=10){
		sum++;
	}
	cout<<sum;
}