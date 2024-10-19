#include<iostream>
using namespace std;
int main()
{
    double C,F;
    cout<<"Temperature in Celcius: ";
    cin>>C;
    F=(C*9/5)+32;
    cout<<"Farenheit Value: "<<F<<endl;

    cout<<"Temperature in Farenheit: ";
    cin>>F;
    C=(F-32)*5/9;
    cout<<"Celcius Value: "<<C;
}
