#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int top = a*b;
	int temp;
	while(b>0){
		temp = a%b;
		a = b;
		b = temp;
	}
	cout<<"Najmniesza wspolna wielkokrotnosc: "<<(top/a);
	return 0;
}