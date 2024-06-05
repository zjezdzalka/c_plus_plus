#include<iostream>
#include<cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	bool isCorrect = true;
	if(n<=1){
		cout<<"NIE\n";
		isCorrect = false;
	}
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0){
			cout<<"NIE\n";
			isCorrect = false;
			break;
		}
	}
	if(isCorrect){
		cout<<"TAK\n";
	}
	return 0;
}

