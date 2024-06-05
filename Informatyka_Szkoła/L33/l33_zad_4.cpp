#include<iostream>
using namespace std;
int main(){
	int i,x;
	int niepar=0,par=0;
	for(i=0;i<20;++i){
		cin>>x;
		if(x%2==1){
			niepar++;
		}
		else{
			par++;
		}
	}
	cout<<"Parzyste: "<<par<<endl<<"Nieparzyste: "<<niepar<<endl;
}