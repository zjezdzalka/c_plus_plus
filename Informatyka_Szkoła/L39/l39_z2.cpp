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
		if(i%100 == 31 || i%100==62 || i%100 == 17){
			sum += i;
		}
	}
	cout<<sum;
	return 0;
}

