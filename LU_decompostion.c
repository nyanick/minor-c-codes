#include <stdio.h>
#define N 36

float a[N][N];
    float L[N][N],U[N][N];
    int i,j,k,c,p,q;

int main()

{
    int n;
    float b[8],x[8],y[8],sum=0.00;
    float m;

    printf("Enter the order of square matrix: ");
    scanf("%d",&n);
    printf("\nEnter your matrix (vectors of the left hand side) :\n");
    for(i=0; i<n; i++)

    {
        for(j=0; j<n; j++)

        {
            scanf("%f",&a[i][j]);
        }
    }

    for(p=0;p<n;p++)

    {
        for(q=0;q<n;q++)

        {
            if(a[q][q]==0)

            {
                printf("no unique solution exit\n\n");
                return 0;

            }

            if(p==q)

            {
                L[p][q]=1;
            }

            else if(q>p)

            {
                L[p][q]=0;
            }
        }
    }

    for(k=0;k<n;k++)

    {
        for(i = 0; i < n; i++)

        {
            if(i>k)

            {
               m= a[i][k]/a[k][k];
               L[i][k]=m;

               for(j = 0; j<n ; j++)

               {
                   a[i][j] = ( a[i][j] - (m * a[k][j]));
                }
            }
        }
    }

    printf("\n\nL is: ");

    for(p=0;p<n;p++)

    {
        printf("\n");

        for(q=0;q<n;q++)

        {
            printf("%9.2f\t",L[p][q]);
        }
    }
        printf("\n\nU is: ");

        for(i=0; i<n ; i++)

        {
        printf("\n");

        for(j=0 ; j<n ; j++)

        {
            printf("%9.2f\t",a[i][j]);
        }
    }

    printf("\n\nenter the values of b (vectors of the right hand side): \n");

    for(i=0;i<n;i++)

    {
        scanf("%f",&b[i]);
    }
//forward substitution

    //y[0]=b[0]/L[0][0];

    for(i=0;i<n;i++)

    {
        for(j=0;j<i;j++)

        {
            sum=L[i][j]*y[j];
        }

        y[i]=(b[i] - sum)/L[i][i] ;
    }

    printf("\n\nthe first solution is :\n");

    for(i=0;i<n;i++)

    {
        printf("y%d= %.2f\t",i+1,y[i]);
    }

    sum=0.0;
    //backward substitution

    //x[n-1]=y[n-1]/a[n-1][n-1];

    for(i=n-1;i>=0;i--)

    {
        for(j=i+1;j<n;j++)

        {
            sum=a[i][j]*x[j];
        }

        x[i]=(y[i] - sum)/a[i][i] ;
    }
    printf("\n\nthe final solution is :\n");
    for(i=0;i<n;i++)

    {
        printf("x%d= %.2f\t",i+1,x[i]);
    }

    printf("\n\nthanks for using the program\n\n");
     return 0;
}

