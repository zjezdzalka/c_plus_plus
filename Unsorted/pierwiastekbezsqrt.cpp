#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float a;
	
	do{
		cout<<fixed<<setprecision(10)<<endl<<"Podaj pierwiastek:"<<endl;
		cin>>a;
		
		
		
	}
	while(a<=0);
	float b,c;
	c=1;
	for(int i=0; i<5; i++){
		do{
			b=b+c;
		}
		while(b*b<a);
		b=b-c;
		c=c/10;
	}
	cout<<b;
};