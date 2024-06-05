#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;++i){
		if(i%10 == 1 || i%10==2 || i%10 == 7){
			sum += i;
		}
	}
	cout<<sum;
	return 0;
}

