#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i=0;i<3;++i){
		for(int j=0;j<i+1;++j){
			cout<<"* ";
		}
		for(int j=3-i;j>=1;--j){
			cout<<"| ";
		}
		if(i%2==0){
			for(int k = 0;k<2;++k){
				cout<<"$ ";
			}
		}
		else{
			for(int k = 0;k<4;++k){
				cout<<"$ ";
			}
		}
	}
	return 0;
}

