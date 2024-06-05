#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int size = log10(n)+1;
	int modulo = pow(10,size);
	if((n*n)%modulo == n) cout<<"Jest";
	else cout<<"Nie";
	return 0;
}