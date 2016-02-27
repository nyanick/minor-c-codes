/*this program sort numbers in ascending order,
 *  where by the user enters the numbers
 * Done by NDE YANICK CHE*/
 
#include<stdio.h>
#include<stdbool.h>
void bubblesort(int ,int array[]);

int main()
{
 int i,length;
  printf("enter the length of the array:");
  scanf("%d",&length);
  int array[length];
  printf("enter the %d elements of the array\n",length);
  for(i=0;i<length;i++)
   {
    scanf("%d",&array[i]);
    }

    bubblesort(length,array);
    printf("the sorted elements in ascending order\n");
    for(i=0;i<length;i++)
   {
    printf("%d\n",array[i]);
    }

    return 0;
    }


    void bubblesort(int length,int array[length])
    {
     bool issorted=false;
     int i;
     int swap;
      while(!issorted)
      {
        issorted=true;
        for(i=0;i<length;i++)
         {
           if(array[i]>array[i+1])
            {
              swap=array[i];
               array[i]=array[i+1];
                array[i+1]=swap;
                issorted=false;
            }
         }
      }

    }
