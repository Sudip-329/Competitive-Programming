#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];
    int r, i, j, k, count=0;
    gets(name);

    r=strlen(name);
    for (i=0; i<r; i++)
    {
        for (j=0; j<r; j++)
        {
            if (i==j)
            {
                continue;
            }
            else
            {
                if (name[i]==name[j])
                {
                    for (k=j; k<r; k++)
                        {
                            //if ((k+1)!='\0')
                                name[k]=name[k+1];
                        }
                    r=r-1;
                    j=j-1;
                }
            }
        }
    }
    count = strlen(name);
    if(count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
