#include<bits/stdc++.h>
using namespace std;
const char literki[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int main(){
	int n;
	cin>>n;
	int pos = 0;
	int count[4] = {0,0,0,0};
	while(n>0 && n<=3999){
		int x = n%10;
		count[pos] = x;
		n /= 10;
		pos += 1;
	}
	string output = "";
	for(int i=0;i<4;++i){
		if(count[i] == 9){
			output = output + literki[(i*2)+2] + literki[i*2];
		}
		else if(count[i] >= 5){
			count[i] -= 5;
			while(count[i] > 0){
				output = output + literki[(i*2)];
				count[i] -= 1;
			}
			output = output + literki[(i*2)+1];
		}
		else if(count[i] == 4){
			output = output  + literki[(i*2)+1] + literki[(i*2)];
		}
		else{
			while(count[i] > 0){
				output = output + literki[(i*2)];
				count[i] -= 1;
			}
		}
	}
	reverse(output.begin(), output.end());
	cout<<output;
	return 0;
}