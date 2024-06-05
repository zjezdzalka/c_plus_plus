#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a=3,b=0,c=2;
	int i;
	if(n<0) cout<<"Nie istnieje.";
	else if(n==0) cout<<a;
	else if(n==1) cout<<b;
	else if(n==2) cout<<c;
	else{
		for(i=2;i<n;++i){
			long long temp = b + a;
			a = b;
			b = c;
			c = temp;
		}
		cout<<c;
	}
	return 0;
}