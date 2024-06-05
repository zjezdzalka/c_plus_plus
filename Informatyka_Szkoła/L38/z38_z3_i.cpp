#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,j;
	int temp = 0;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			if(i==2 || j==2){
				cout<<".";
			}
			else if(j == 4-temp || j==0+temp){
				cout<<"#";
			}
			else{
				cout<<" ";
			}
		}
		if(i<5/2){
			temp ++;
		}
		else{
			temp --;
		}
		cout<<"\n";
	}
	return 0;
}

