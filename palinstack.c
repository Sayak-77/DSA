#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *stack1,*stack2;
int top1=-1,top2=-1;
void push1(char c)
{
    ++top1;
    stack1[top1]=c;
}
char pop1()
{
    return stack1[top1--];
}
void push2(char c)
{
    ++top2;
    stack2[top2]=c;
}
char pop2()
{
    return stack2[top2--];
}
int palin(char s[])
{
    int l=strlen(s);
    int k=0,x=0,t=1;
    stack1=(char*)malloc(l*sizeof(char));
    stack2=(char*)malloc(l*sizeof(char));
    int i,mid=l/2;
    for(i=0;i<mid;i++)
    {
        push1(s[i]);
    }
    if(l%2!=0)
    k=++i;
    else
    k=i;
    for(i=l-1;i>=k;i--)
    {
        push2(s[i]);
    }
    while(x<mid)
    {
        char c1=pop1();
        char c2=pop2();
        if(c1!=c2)
        {
            t=-1;
        }
        x++;
    }
    return t;
}
int main()
{
    
    int len;
    printf("ENTER THE LENGTH OF STRING: ");
    scanf("%d",&len);
    printf("ENTER THE STRING: ");
    char str[len];
    scanf("%s",str);
    printf("\n\n~::USING STACK IMPLEMENTATION::~\n");
    if(palin(str)==1)
    printf("\nYES,The Inputted String is a Palindrome!!\n\n");
    else
    printf("\nNO,The Inputted String is not a Palindrome!!\n\n");
}
