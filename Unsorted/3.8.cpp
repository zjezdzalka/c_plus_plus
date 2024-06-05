#include<iostream>
using namespace std;
int main(){
if(1==1){
	int k,a,i1,i2;
	cout<<"Wprowadz liczbe k: \n";
	cin>>k;
	cout<<"Wprowadz potege a: \n";
	cin>>a;
	if(a==0){
		cout<<k<<"^"<<a<<" jest rowne 1.";
		return 0;
	}
	if(a==1){
		cout<<k<<"^"<<a<<" jest rowne "<<k<<".";
		return 0;
	}
	if(a>1){
		i2=i1;
            i1=k;
            cout<<"i1: "<<i1<<endl;
            cout<<"i2: "<<i2<<endl;
            while(k>i2);{
                cout<<"i1: "<<i1<<endl;
                cout<<"i2: "<<i2<<endl;
                k=k+k;
            }
            while(i2>1){
                i1=k+i1;
                i2=i2-1;
            }
            cout<<"k:"<<k<<endl;
            cout<<"i2: "<<i2<<endl;
            cout<<"i1: "<<i1<<endl;
            a=a-1;
            cout<<"a: "<<a<<endl;
		}
		cout<<"Wynik jest rowny "<<k<<".";
	}
	return 0;
}
