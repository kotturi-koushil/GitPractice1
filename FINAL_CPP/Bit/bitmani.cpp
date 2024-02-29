#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n = 2;
	int ans =0;
	int i =0;
	while ( n!= 0){
		int bit = n & 1;
		ans = ans + (bit * pow(10,i));
		i = i+1;
		n = n >> 1;
	}
	cout<<ans;
}
		
