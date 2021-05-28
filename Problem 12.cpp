#include <iostream>
using namespace std;

int tot_div(long long unsigned int n){
	int tot=1;
	long long unsigned int i;
	for(i=1; i<n/2; i++)
		if(n%i==0)
			tot++;
	return tot;		
}

int main(){
	int i=1;
	long long unsigned int n;
	do{
		n=i*(i+1)/2;
		i++;
	}while(tot_div(n)<500);
	cout<<n<<endl;
	return 0;
}
