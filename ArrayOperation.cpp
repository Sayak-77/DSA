#include <iostream>
using namespace std;
void insertion_52(int ar[],int n,int k,int m)
{
    int i,p=n;
    cout<<"The Array Original Elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        printf("LA[%d]= %d\n",i,ar[i]);
    }
    n=n+1;
    while(p>=(k-1))
    {
        ar[p+1]=ar[p];
        p=p-1;
    }
    ar[k-1]=m;
    cout<<"\nThe Array Elements after Insertion: "<<endl;
    for(i=0;i<n;i++)
    {
        printf("LA[%d]= %d\n",i,ar[i]);
    }
}
void deletion_52(int ar[],int n,int k)
{
    int i,p=k;
    cout<<"The Array Original Elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        printf("LA[%d]= %d\n",i,ar[i]);
    }
    while(p<n)
    {
        ar[p-1]=ar[p];
        p=p+1;
    }
    n=n-1;
    cout<<"\nThe Array Elements after Deletion: "<<endl;
    for(i=0;i<n;i++)
    {
       printf("LA[%d]= %d\n",i,ar[i]);
    }
}
int main()
{
    cout<<"Name: Sayak Chatterjee\n"<<"UID: 20BCS1452\n"<<endl;
    int N_52,K_52,item_52,i;
    cout<<"Enter the size of array: ";
    cin>>N_52;
    int LA[N_52];
    cout<<"Enter the Array Elements: "<<endl;
    for(i=0;i<N_52;i++)
    {
        cin>>LA[i];
    }
    int ch;
    cout<<"ENTER 1 FOR INSERTION OPERATION & 2 FOR DELETION OPERATION: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter the position of Insertion: ";
        cin>>K_52; 
        cout<<"Enter the Number to be Inserted: ";
        cin>>item_52;
        insertion_52(LA,N_52,K_52,item_52);
        break;
        case 2:
        cout<<"Enter the position of Deletion: ";
        cin>>K_52;
        deletion_52(LA,N_52,K_52);
        break;
        default:
        cout<<"WRONG CHOICE..!!";
    }
}