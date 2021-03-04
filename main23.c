#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[5] = {1,3,4,2,5};
	int swa=0;
	int las=0;
	for(int cir=0;cir<4;cir++){
		int min=cir;
		for(int n=cir+1;n<5;n++){
			swa=0;
			if(a[n]<a[min]){
				swa=a[n];
				a[n]=a[min];
			    a[min]=swa;
			}
		}
	}
	while(las<5){
		printf("%d",a[las]);
	    las++;
	}
	return 0;
}
