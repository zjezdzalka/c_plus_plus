#include<iostream>
using namespace std;
int main(){
	int x,y, sum=0;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		sum += i;
	}
	cout<<sum;
}