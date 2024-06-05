#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,j;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			if(i%2==0){
				cout<<"#";
			}
			else if(i%2==1 && j==5/2){
				cout<<".";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

