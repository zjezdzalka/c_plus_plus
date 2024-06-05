#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x = n;
	int tablica[(int)log2(n) + 1];
	for(int i = log2(n); i>=0; --i){
		tablica[i] = n%2;
		n /= 2;
	}
	for(int i = 0; i <= log2(x); ++i){
		cout<<tablica[i];
	}
	return 0;
}