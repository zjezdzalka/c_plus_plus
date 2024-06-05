#include<iostream>
using namespace std;
int main(){
	int i;
	int x;
	int min,max=-1;
	for(i=0;i<10;++i){
		cin>>x;
		if(max<x){
			max = x;
		}
		
		if(max != -1){
			if(min>x){
				min = x;
			}	
		}
		else{
			min = x;
		}
	}
	cout<<"----"<<endl;
	cout<<min<<endl<<max;
}