#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Podaj x:";
	cin>>x;
	cout<<"Podaj najwieksza potege wielomianu:";
	int a;
	cin>>a;
	long sum = 1;
	for(int i=a;i>=0;--i){
		cout<<"x^"<<i<<": ";
		int temp; cin>>temp;
		sum = (sum * x) + temp;
	}
	cout<<sum;
	return 0;
}