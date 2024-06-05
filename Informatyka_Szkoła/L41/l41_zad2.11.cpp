#include<iostream>
using namespace std;
int main(){
	string n;
	cin>>n;
	const int values[7] = {1000,500,100,50,10,5,1};
	int i;
	int sum = 0;
	for(i=0;i<n.size();++i){
		switch(n[i]){
			case 'M':
				sum += 1000;
				break;
			case 'D':
				sum += 500;
				break;
			case 'C':
				if(n[i+1] == 'M'){
					sum += 900;
					i += 1;
				}
				else if(n[i+1] == 'D'){
					sum += 400;
					i += 1;
				}
				else{
					sum += 100;
				}
				break;
			case 'L':
				sum += 50;
				break;
			case 'X':
				if(n[i+1] == 'C'){
					sum += 90;
					i += 1;
				}
				else if(n[i+1] == 'L'){
					sum += 40;
					i += 1;
				}
				else{
					sum += 10;
				}
				break;
			case 'V':
				sum += 5;
				break;
			case 'I':
				if(n[i+1] == 'X'){
					sum += 9;
					i += 1;
				}
				else if(n[i+1] == 'V'){
					sum += 4;
					i += 1;
				}
				else{
					sum ++;
				}
				break;
			default:
				cout<<"Zle wprowadzono liczbe";
				return 1;
		}
	}
	cout<<sum;
	return 0;
}