#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int a;
	int temp=0; 
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(j==(n/2)-temp || j==(n/2)+temp) cout<<"#";
			else cout<<" ";
		}
		if(n/2 <= i) temp --;
		else temp++;
		cout<<"\n";
	}
	return 0;
}