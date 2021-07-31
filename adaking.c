#include<stdio.h>
int main()
{
    int i,j,t,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            if(j==1)
                printf("O");
            if(j%8==1 && j!=1)
                printf("\n");
            if(j!=1)
                printf(".");
        }
        if(k%8!=0)
        {
            if(j<8)
            {
                printf("X");
                j++;
            }
            else
            {
                while(j%8!=1 && j<=64)
                {
                    printf("X");
                    j++;
                }
            }
            for(;j%8!=1 && j<=64;j++)
            {
                printf(".");
            }
            printf("\n");
            int m=j%8,l=k%8+1;
            for(;m<=l && j<=64;j++,m++)
                printf("X");
            for(;j<=64;j++)
            {
                if(j%8==1)
                    printf("\n");
                printf(".");
            }
        }
        else
        {
            printf("\n");
            for(int c=0;c<8 && j<=64;j++,c++)
                printf("X");
            for(;j<=64;j++)
            {
                if(j%8==1)
                    printf("\n");
                printf(".");
            }
        }
        printf("\n\n");
    }
    return 0;
}