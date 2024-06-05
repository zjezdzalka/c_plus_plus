#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	long long sum = 0;
	long long power = 2;
	for(int i=0;i<a.size();++i){
		sum = (sum * power) + int(a[i]=='1'?1:0);
	}
	cout<<sum;
	return 0;
}