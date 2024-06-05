#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,j;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			if((i%2==0 && j%2==0) || (i%2==1 && j%2==1)){
				cout<<".";
			}
			else{
				cout<<"?";
			}
		}
		cout<<"\n";
	}
	return 0;
}

