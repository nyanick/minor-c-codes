/*can calculate the factorial of any number
 *saw the idea online and implemented it
 */
#include<stdio.h>

int main()

{

    int i=0,j=0,num[30000],k=0,l=0,n=0,temp=0;



    num[0]=1;

    l=1;

    printf("enter value: ");

    scanf("%d",&n);

    for(i=2;i<=n;i++)

     {

       for(j=0;j<l;j++)

        {
           k=temp+i*num[j];

          num[j]=k%10;

          temp=k/10;

        }

        while(temp>0)

         {

            num[l++]=temp%10;

            temp=temp/10;

         }

     }

     for(i=l-1;i>-1;i--)

     printf("%d",num[i]);


     printf("\n");
     return 0;

     }
