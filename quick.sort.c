#include<stdio.h>
#include<stdbool.h>
void quick_sort( int a[],int n);
int a[11],e[1],g[5],l[5],i,j;
int main(){
	printf("enter your numbers\n");
	for(i=0;i<=10;i++){
		scanf("%d",&a[i]);
	}
	quick_sort(a,11);
	return 0;
}
void quick_sort(int a[],int n){
	int i,k=0,j=0;
	e[0] = a[n/2];
	for(i=0;i<=n;i++){
		if(e[0]<a[i]){
			l[j]=a[i];
			j++;
		}
		else{
			g[k]=a[i];
			k++;
		}
	}
	n=0;
	while(n!=10){
		quick_sort(l, j);
		quick_sort(g, k);
		n++;
	}
	a[5]=e[0];
	for(i=0;i<j;i++){
		a[i]=l[i];
	}
	for(i=0;i<k;i++){
		a[i+5]=g[k];
	}
	printf("the sorted array is (from quick sort):\n");
	for(i=0;i<=n;i++){
		printf("%d\n",a[i]);
	}
		
}
