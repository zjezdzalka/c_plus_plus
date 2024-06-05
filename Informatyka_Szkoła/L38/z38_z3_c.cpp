#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,j;
	int a=4,b=0;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			if(j==a){
				cout<<"?";
			}
			else if(j==b){
				cout<<".";
			}
			else{
				cout<<" ";
			}
		}
		a-=1;
		b++;
		cout<<"\n";
	}
	return 0;
}

