#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i=0;i<5;++i){
		cout<<"* ";
		for(int j=0;j<i+1;++j){
			if(i%2==0){
				cout<<"| ";
			}
			else{
				cout<<"- ";
			}
		}
	}
	return 0;
}

