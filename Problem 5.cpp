#include <iostream>
using namespace std;

int tot_div(int n){
	int sum=0,i;
	for(i=2; i<n/2+1; i++)
		if(n%i==0)
			sum++;
	return sum;		
}

int main(){
	int i,sum=0,j;
	long long int n;
	for(i=1; i<10000000; i++){
		sum=0;
		n=i*(i+1)/2;
		for(j=2; j<n/2+1; j++)
			if(n%j==0)
				sum++;
		if(sum==501)
			break;		
	}
	cout<<n<<endl;
	return 0;	
}
