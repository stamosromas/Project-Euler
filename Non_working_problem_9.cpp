#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
	if(n==0||n==1)
		return 1;
	else
		return n*fact(n-1);	
}

int main(){
	unsigned long long int i;
	i=fact(100);
	cout<<i;
}

