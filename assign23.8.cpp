/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20,c;
    cout<<"a="<<a<<"\nb="<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\n a="<<a <<"b="<<b;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout<<"a="<<a <<"b="<<b;
    cout<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a <<"b="<<b;

}
