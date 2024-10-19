#include <iostream>
using namespace std;
int main()
{
    string a;
    cout<<"enter the string: "; getline (cin,a);
    a[0]='Q';
    cout<<"output is: "<<a;

    return 0;
}
