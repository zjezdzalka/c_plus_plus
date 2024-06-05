#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	short ilosc = 0;
	int i,j,k;
	for(i=1;i<=9;++i){
		for(j=0;j<=9;++j){
			for(k=0;k<=9;++k){
				if(i!=j && i!=k && j!=k){
					ilosc++;
					cout<<i<<j<<k<<" ";
				}
			}
		}
	}
	cout<<"\n"<<ilosc;
	return 0;
}