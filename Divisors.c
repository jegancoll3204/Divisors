#include<stdio.h>
int main()
{
    int i,num=0,j;

    char a[][90]={"First","Second","Third","Fourth","Fivth","Sixth","Seventh","Eighth","Nineth","tenth"};

    printf("Enter Number :");
    scanf("%d",&num);

    for(i=1,j=0;i<=num;i++,j++)
    {
        if(num%i==0)
        {   
            printf("%s :",a[j]);
            printf("%d\n",i);
        }
    }

    
}