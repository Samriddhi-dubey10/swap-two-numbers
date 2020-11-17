#include <iostream>

using namespace std;


int main()
{
    int a,b;
    cout << "Enter two no" << endl;
    cin>>a>>b;
    cout<<"Before swap"<<a<<"\n";
    cout<<"Before swap"<<b<<"\n";
    swap(a, b);
    cout<<"After swap"<<a<<"\n";
    cout<<"After swap"<<b<<"\n";
    return 0;
}
