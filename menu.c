#include<stdio.h>
float add(int,float);
void sumOFDigits(int);
unsigned int fact(unsigned int);
void check_prime();
void main()
{
    int x,n,b,e;
    float result,y;
    long int f;
    unsigned int a;
    do
    {
        printf("\t\tMENU\n\nChoose a program you want to run:\n");
        printf("1.Sum of two numbers\n2.Sum of digits of an integer\n");
        printf("3.To calculate the factorial of an integer\n4.To check prime number");
        printf("\nEnter a number from above options:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("enter two numbers:");
                scanf("%d%f",&x,&y);
                result=add(x,y);
                printf("SUM=%f",result);
                break;
            case 2:
                printf("enter a number:");
                scanf("%d",&b);
                sumOFDigits(b);
                break;
            case 3:
                printf("enter a non negative integer:");
                scanf("%u",&a);
                f=fact(a);
                printf("Factorial of %u = %ld",a,f);
                break;
            case 4:
                check_prime();
                break;
        }
        printf("\nEnter '0' to exit\nEnter any number to continue:");
        scanf("%d",&e);
    }while(e!=0);
}
float add(int a, float b)
{
    float c;
    c=a+b;
    return c;
}
void sumOFDigits(int n)
{
    int sum=0,rem;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sumof digits =%d",sum);
}
unsigned int fact(unsigned int x)
{
    int i;
    long int facto=1;
    for(i=1;i<=x;i++)
    {
        facto=facto*i;
    }
    return facto;
}
void check_prime()
{
    int z,j,count=0;
    printf("enter a number: ");
    scanf("%d",&z);
    if(z<0)
    {
        printf("negative numbers cannot be prime!");
    }
    else
    {
        for(j=1;j<=z;j++)
        {
            if(z%j==0)
                count++;
        }
        if (count==2)
            printf("it is a prime number.");
        else
            printf("it is not a prime number.");
    }
}



