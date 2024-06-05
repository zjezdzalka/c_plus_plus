#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int temp_n=n, temp_k=k, temp=n-k;
	int32_t silnia_n = 1;
	long long silnia_n_k = 1;
	while(temp_n>temp_k){
		silnia_n *= temp_n;
		temp_n--;
	}
	while(temp>0){
		silnia_n_k *= temp;
		temp--;
	}
	cout<<"-----"<<endl<<silnia_n<<endl<<silnia_n_k;
	cout<<endl<<"-----"<<endl<<(long long)silnia_n/silnia_n_k;
	return 0;
	
}