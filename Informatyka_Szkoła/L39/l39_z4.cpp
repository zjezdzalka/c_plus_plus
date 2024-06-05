#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	long long sum=0;
	int sum_cyfr = 0;
	for(int i=1;i<=n;++i){
		int temp = i;
		sum_cyfr = 0;
		while(temp != 0){
			sum_cyfr += temp%10;
			temp /= 10;
		}
		if(sum_cyfr%2 == 0){
			sum += i;
		}
	}
	cout<<sum;
	return 0;
}

