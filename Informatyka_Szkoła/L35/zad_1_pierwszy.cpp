#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,temp_n,sum=0;
	cin>>n;
	for(int i=1;i<n;++i){
		if(n%i==0){
			sum += i;
		}
	}
	if(sum==n){
		cout<<"Doskonale";
	}
	else{
		cout<<"Niedoskonale";
	}
}