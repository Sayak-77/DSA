#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
template <typename Getsuga>
void printArray(vector<Getsuga>V)
{
    int i;
    cout<<"\nThe Elements are: "<<endl;
    for(i=0;i<V.size();i++)
    {
        cout<<V[i]<<endl;
    }
}
int main() {
	int n;
    cout<<"Enter the size of the Integer Array: ";
	cin>>n;
	vector<int> int_vector(n);
    cout<<"Enter the Elements: "<<endl;
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
    cout<<"Enter the size of the String Array: ";
	cin>>n;
	vector<string> String(n);
    cout<<"Enter the Elements: "<<endl;
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		String[i] = value;
	}
	printArray<int>(int_vector);
	printArray<string>(String);
	return 0;
}