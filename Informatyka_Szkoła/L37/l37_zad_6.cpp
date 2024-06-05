#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1 || n==2){
		cout<<"1\n";
	}
	else{
		int a=0,b=1;
		int i;
		for(i=1;i<n;++i){
			b += a;
			a = b-a;
		}
		cout<<b;
	}
	return 0;
}