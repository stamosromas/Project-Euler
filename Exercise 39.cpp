#include <iostream>
#include <cmath>
using namespace std;

bool trs(int a,int b,int c){
	if((a<=b+c)&&(b<=a+c)&&(c<=a+b))
		return true;
	else
		return false;	
}

int main(){
	int p[1001],i,j,k;
	float f;
	for(i=0; i<1001; i++)
		p[i]=0;	
	for(i=1000/2; i>=1; i--){
		for(j=1; j<=i; j++){
			f=sqrt(i*i+j*j);
			k=f;
			if((k==f)&&(trs(i,j,k))&&(i+j+k<=1000))
				p[i+j+k]++;
		}
	}
	int max=p[0],imax;
	for(i=1; i<1001; i++){
		cout<<i<<")"<<p[i]<<endl;
		if(p[i]>max){
			max=p[i];
			imax=i;
		}
	}
	cout<<imax<<endl;
	return 0;
}




