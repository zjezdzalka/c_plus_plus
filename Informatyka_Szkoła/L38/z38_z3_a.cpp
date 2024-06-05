#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,j;
	int temp = 0;
	int a = 2;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			if(a + temp == j || a - temp == j){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		if(i >= a){
			temp -= 1;
		}
		else{
			temp ++;
		}
		cout<<"\n";
	}
	return 0;
}

