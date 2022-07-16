#include <stdio.h>
int main()
{

    long int i,j,n,f,d1,d2;
    int a[100];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=100;i++)
    {
      a[i]=a[i-1]+a[i-2];  
    }

/* for N, max value for N will be 100 */
    printf("Input N: ");
    scanf("%d",&n);
    printf("Fib: %d \n", a[n-1]);
   
    /* for F */
   
    printf("Input F: ");
    scanf("%d",&f);
       
    for(i=0;i<=100;i++)
    {
        if(a[i]==f)
        {
            printf("F is fib: %d \n",a[i]);
            break;
        }
        if (a[i]>f)
        {
            d1=f-a[i-1];
            d2=a[i]-f;
            if (d1>d2)
            {
                printf("Closest Fib: %d \n",a[i]);
                break;
            }
            else
            {
                printf("Closest Fib: %d \n",a[i-1]);
                break;
            }
           
        }
    }
    return 0;
}
