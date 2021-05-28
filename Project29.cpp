#include <iostream>
#include <cmath>
using namespace std;

bool f1(int n){
	long long unsigned sum=0;
	int k;
	k=n;
	while(k!=0){
		sum+=pow(k%10,5);
		k/=10;
	}
	if(n==sum)
		return true;
	else
		return false;	
}


int main(){
	long long unsigned int sum=0,i;
	for(i=10; i<1000000000; i++){
		if(f1(i)){
			cout<<i<<endl;
			sum+=i;
		}
	}
	cout<<sum<<endl;
	return 0;		
}
//443839
