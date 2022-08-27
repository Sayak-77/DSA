#include <iostream>
using namespace std;
int main()
{
    int b=1000,lc=0,lr=0,i=8,j=5,uc=10,ur=10,w=2;
    int m=(ur-lr+1);
    cout<<"\n::~ADDRESS OF ARRAY IN COLUMN MAJOR ORDER::~"<<endl;
    cout<<"\nFORMULA USED: Address of A[I][J] = B + W * ((J - LC) * M + (I - LR))";
    int address=b+w*(((j-lc)*m)+(i-lr));
    cout<<"\n\nTHE ADDRESS OF ARRAY: "<<address;
}