#include<iostream>
using namespace std;

int main(){
	int a,b;
	a=1;
	b=0;
	for(int i=0;i<10;i++){
		b = b+a;
		a = a+a;
		cout<<"b:"<<b<<endl;
		cout<<"a:"<<a<<endl;
	}
}
