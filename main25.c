#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int a[5] = {1,3,4,2,5};
    int front=0;
    int swa=0;
    for(int n=1;n<5;n++){
    	front=n-1;
    	if(a[n]<a[n-1]){
    		swa=a[n];
    		a[n]=a[n-1];
    		while(swa<a[front]){
    			a[front+1]=a[front];
    			front--;
			}
			a[front+1]=swa;
		}
	}
	int las=0;
		while(las<5){
		printf("%d",a[las]);
	    las++;
	}
	return 0;
}

