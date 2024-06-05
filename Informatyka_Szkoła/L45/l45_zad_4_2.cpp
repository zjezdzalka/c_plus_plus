#include<iostream>
using namespace std;
int main(){
	int p = 16;
	string a;
	cin>>a;
	long long sum = 0;
	for(int i=0;i<a.size();++i){
		sum = (sum * p) + int(a[i]>=65? a[i]-55:a[i]-48);
	}
	cout<<sum;
	return 0;
}