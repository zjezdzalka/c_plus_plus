#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    for(int o = 1; o <= 4; o++){
    double i = 3;
    float j = 3;
    int b = 0;
        for(int a = 1; a <= 15;) {
        cout <<fixed<<setprecision(0)<< "<" << i << "\n";
        
        a = a+1;
        i = i*10;
        i = i+3;
        	if(a==16){
        		b = 16;
			}
        if(b == 16){
		for(int b = 16; b >= 0;) {
        cout << "<" << i << j << "\n";
        b = b-1;
		j = j*10;
        j = j+3;	
		}
	}
	}
for(double a = 15; a >= 1;) {
        cout << "<" << i << "\n";
        
        a = a-1;
        i = i/10;
           i = i-0.3;
}
}

return 0;
}