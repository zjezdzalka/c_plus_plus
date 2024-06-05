#include<iostream>
#include<cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;++i){
		bool isCorrect = true;
		if(i<=1){
			isCorrect = false;
		}
		for(int j=2;j<=sqrt(i);++j){
			if(i%j==0){
				isCorrect = false;
				break;
			}
		}
		if(isCorrect) sum += i;
	}
	cout<<sum;
	return 0;
}

