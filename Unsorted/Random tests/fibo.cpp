#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a = 0;
	int b = 1;
	int c = 1;
	while(n-2>0){
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	cout<<c;
}