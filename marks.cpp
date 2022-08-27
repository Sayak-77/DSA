#include <iostream>
#include <iomanip>
using namespace std;
class Assignment
{
    int i,j;
    float arr[20][5]={{91.25,93,88,86,78},{88,86,78.2,90.10,95},{66,89,92,93,94.5},{90,80,85,89.89,96},{30,20,50,25.5,40},{63,89,78,91,88},{97,91.25,90.5,93,94},{65,51,65,78,87},
    {55,59,65.5,79,95},{50,81,83.35,78,99},{49.75,45,22,37.10,41},{63,66,75,77,89},{56,89,92,88,66},{50,78,90.25,83,78.75},{60,21,28.5,31,44},{89,94.5,92,98,88},{85,88,79,70.5,69},
    {35.65,41,44,29.5,24},{100,89,85.5,88,91.25},{58,43,41,19,40.25}};
    public:
    void StudAvg()
    {
        float sum=0;
        cout<<"\n(B) ::~AVERAGE OF EVERY STUDENT~::\n\n";
        for(i=0;i<20;i++)
        {
            for(j=0;j<5;j++)
            {
                sum=sum+arr[i][j];
            }
            cout<<"THE AVERAGE OF STUDENT "<<(i+1)<<": "<<fixed<<setprecision(2)<<(sum/5)<<endl;
            sum=0;
        }
    }  
    void SubjAvg()
    {
        float sum=0;
        cout<<"\n\n(A) ::~AVERAGE OF EACH SUBJECT~::\n\n";
        for(i=0;i<5;i++)
        {
            for(j=0;j<20;j++)
            {
                sum=sum+arr[j][i];
            }
            cout<<"THE TOTAL AVERAGE IN SUBJECT "<<(i+1)<<": "<<setprecision(4)<<(sum/20)<<endl;
            sum=0;
        }
    }
    void Compare()
    {
        float avg=0,sum=0;
        cout<<"\n\n(C) ::~THE STUDENTS WHOSE AVERAGE IS BELOW 50~:: \n\n";
        for(i=0;i<20;i++)
        {
            for(j=0;j<5;j++)
            {
                sum=sum+arr[i][j];
            }
            avg=(sum/5);
            if(avg<50)
            cout<<"STUDENT "<<(i+1)<<", AVERAGE: "<<fixed<<setprecision(2)<<avg<<endl;
            avg=0;
            sum=0;
        }
    }
    void display()
    {
        cout<<"\n\n(D) ::~DISPLAY SCORES OF EACH STUDENT~::\n\n";
        cout<<"DETAILS: "<<"\t\tSCORE 1: "<<"\tSCORE 2: "<<"\tSCORE 3: "<<"\tSCORE 4: "<<"\tSCORE 5: \n\n";
        for(i=0;i<20;i++)
        {
            cout<<"STUDENT "<<(i+1)<<": ";
            for(j=0;j<5;j++)
            {
                cout<<"\t\t"<<fixed<<setprecision(2)<<arr[i][j];
            }
            cout<<"\n"; 
        }
    }
};
int main()
{
    Assignment obj;
    obj.SubjAvg();
    obj.StudAvg();
    obj.Compare();
    obj.display();
    cout<<"\n\nName: SAYAK CHATTERJEE; UID: 20BCS1452; Class: CSE4A";
}