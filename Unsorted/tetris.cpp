#include<iostream>
using namespace std;
int main(){
	char
	tablica[20][10];
	for(int i=0; i<21; i++){
		for(int j=0; j<11; j++){
			tablica[i][j] = 0;
		}
	}
	for(int i=1; i<42; i++){
		for(int j=0; j<23; j++){
				if(i==0 || i==41){
					cout<<"-";
				}
			else{
				if(i%2==1){
					cout<<"-";				
				}
				else{
					if(j%2==0){
						cout<<"|";
					}
					else{
						cout<<" ";
					}
				}
			}
		}
		cout<<endl;
	}
}