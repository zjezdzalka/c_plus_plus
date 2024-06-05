#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string binary = "";
	while(n>0){
		binary = (char)((n%2) + 48) + binary;
		n /= 2;
	}
	cout<<binary;
	return 0;
}