#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,temp_n,sum=1;
	cin>>n;
	temp_n = n;
	for(int i=2;i<=sqrt(temp_n);++i){
		if(n%i==0){
			if(i*i==n){
				sum += i;
			}
			else{
				sum += i;
				sum += n/i;
			}
		}
	}
	if(sum==temp_n){
		cout<<"Doskonala";
	}
	else{
		cout<<"Niedoskonala";
	}
}