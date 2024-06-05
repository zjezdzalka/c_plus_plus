#include<iostream>
using namespace std;
int main(){
	int i,j,k,l;
	/*for(i=1;i<=9;++i){
		for(j=0;j<=9;++j){
			for(k=0;k<=9;++k){
				if(i!=j && i!=k && j!=k){
					cout<<i<<j<<k<<" ";
				}
			}
		}
	}*/
	for(i=100;i<1000;++i){
		int temp = i;
		j = temp%10;
		temp/=10;
		k = temp%10;
		temp /= 10;
		l = temp;
		if(j!=k && j!=l && k!= l){
			cout<<((l*100) + (k*10) + j)<<" ";
		}
	}
	return 0;
}