#include<stdio.h>
#include <stdbool.h>

#define MAX_NUM 100
int main(){
	int a[MAX_NUM],i,n,aux;
	printf("enter the total number of elements you want to sort\n");
	scanf("%d",&n);
	printf("enter your numbers\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bool issorted=false;
	while(!issorted){
		issorted = true;
		for(i=0;i<n;i++){
			if(a[i]>a[i+1]){
				aux = a[i];
				a[i] = a[i+1];
				a[i+1] = aux;
				issorted = false;
			}
		}
	}
	printf("\nthe sorted numbers in ascending order are\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
	
	
			
