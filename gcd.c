/*your enter any two such as a/b as its 
 * simplify the fraction to its lowest term*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,d,i;

printf("enter two numbers\n");
//enter the numbers
scanf("%d/%d",&a,&b);

    for(i=a;i>=2;i--)
    {
        if(a%i==0&&b%i==0)
           d=i;
         break;
    }

    if(i<=a&&i<=b)

     printf("the lowest is:%d/%d\n",a/d,b/d);

    exit(EXIT_SUCCESS);
}
