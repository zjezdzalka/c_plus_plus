#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i=0;i<4;++i){
		for(int j=0;j<i+1;++j){
			cout<<"* ";
		}
		if(i%2==0){
			cout<<"& & ";
		}
		else{
			cout<<"^ ^ ";
		}
	}
	return 0;
}

