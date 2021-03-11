#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int change[7]={-4,-3,-2,-1,4,3,2};
	int high[4];
	int n=0;
	int t=0;
	high[0]=0;
	int m=0;
	while(n<7){
		t=t+change[n];
		if(change[n]>0){
			m=m+1;
			high[m]=t;
		}
		n++;
	}
	int max=0;
	while(m>=0){
		if(high[m]>max){
			max=high[m];
		}
	    m--;
	}
	printf("%d",max);
	return 0;
}
