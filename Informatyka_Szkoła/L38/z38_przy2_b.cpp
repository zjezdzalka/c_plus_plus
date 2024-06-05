#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	short ilosc = 0;
	int i=1,j=0,k=0;
	while(i<=9){
		if(i!=j && i!=k && j!=k){
			ilosc++;
			cout<<i<<j<<k<<" ";
		}
		k++;
		if(k%10==0){
			k -= 10;
			j++;
			if(j%10==0){
				j -= 10;
				i++;
			}
		}
	}
	cout<<"\n"<<ilosc;
	return 0;
}

