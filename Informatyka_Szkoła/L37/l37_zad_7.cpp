#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0,b=1;
	int i;
	cout<<"Liczby w ciagu to: ";
	for(i=0;i<n;++i){
		b += a;
		a = b-a;
		cout<<a<<" ";
	}
	
	return 0;
}