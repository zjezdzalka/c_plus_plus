#include<iostream>
using namespace std;
int main(){
	long long int a=0;
	long long int b=0;
	long long int c=0;
	for(int i=0;i<100000; i++){
		for(int j=0; j<i; j++){
			b=b+6;	
		}
		a = a+b+1; 
		c = i+1;
		cout<<c<<"^3 = "<<a<<endl;
		
	}
}