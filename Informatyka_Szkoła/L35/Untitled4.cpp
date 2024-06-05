#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int current = n;
	int sum = 0;
	bool isCorrect = true;
	while(isCorrect){
		while(current != 0){
			sum += pow((current % 10),2);
			current /= 10;
		}
		current = sum;
		if(current == 1 || current == n){
			isCorrect = false;
		}
		sum = 0;
	}
	
	if(current == 1){
		cout<<"Jest wesola";
	}
	else{
		cout<<"Nie";
	}
	return 0;
}