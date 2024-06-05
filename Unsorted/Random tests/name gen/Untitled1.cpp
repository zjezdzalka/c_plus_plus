#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file;
	file.open("plik.txt");
	int a,b,c,d,e;
	for(a=0;a<26;++a){
		for(b=0;b<26;++b){
			for(c=0;c<26;++c){
				for(d=0;d<26;++d){
					for(e=0;e<26;++e){
						file<<(char)(a+65)<<(char)(b+65)<<(char)(c+65)<<(char)(d+65)<<(char)(e+65)<<endl;
					}
				}	
			}
		}	
	}
	file.close();
}