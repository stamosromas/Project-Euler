#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool exist_in_ar(int a[],int l,int num){
	int i;
	for(i=0; i<l; i++){
		if(a[i]>num)
			return false;
		else if(num==a[i])
			return true;	
	}
}

int main(){
	int a[10000],min=INT_MAX,i,s,d;
	for(i=0; i<10000; i++)
		a[i]=((i+1)*(3*i+2))/2;
	int j;
	for(i=0; i<9999; i++){
		for(j=1+i; j<10000; j++){
			s=a[i]+a[j];
			d=a[j]-a[i];
			if(exist_in_ar(a,10000,d)&&exist_in_ar(a,10000,s))
				if(min>a[j]-a[i])
					min=a[j]-a[i];
	}	
	}
	cout<<min<<endl;
	return 0;		
}
