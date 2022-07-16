#include <stdio.h>
#include <string.h>
 
char string1[100], string2[100], counted[100];
int count[100] = {0}, flag = 0;
 
void main()
{
    int i, j, k, l, max, index;
    j=0;
    k=0;
    printf("Enter a string : ");
    scanf("%s", string1);
   
   
    l = strlen(string1);
    for(i=0;i<l;i++)
    string2[i]=tolower(string1[i]);
    for (i = 0; i < l; i++)
    {
        if (i == 0)
        {
            counted[j++] = string2[i];
            count[j - 1]++;
        }
        else
        {
            for (k = 0; k  < j; k++)
            {
                printf("%c \n %c \n", string2[i], counted[k]);
               
                if (string2[i] == counted[k])
                {
                    count[k]++;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                counted[j++] = string2[i];
                count[j - 1]++;
            }
            flag = 0;
        }
    }    
 
    for (i = 0; i < j; i++)
    {
        if ((i == 0) && (counted[i] != ' '))
        {
            max = count[i];
            continue;
        }
        if ((max < count[i]) && (counted[i] != ' '))
        {
            max = count[i];
            index = i;
        }
    }
 
    printf("\nMax repeated character in the string = %c ", counted[index]);
    printf("\nIt occurs %d times \n", count[index]);
}

