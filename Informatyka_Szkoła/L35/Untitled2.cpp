#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	bool isCorrect = true;
	long long potega = n*n;
	while(n!=0){
		short temp_n = n%10;
		short temp_potega = potega%10;
		if(temp_n != temp_potega){
			isCorrect = false;
		}
		n/=10;
		potega /= 10;
	}
	if(!isCorrect){
		cout<<"Nie jest";
	}
	else{
		cout<<"Jest";
	}
	return 0;
}