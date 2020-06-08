#include <iostream>
using namespace std;
int main(void)
{
 int a=1, b=3;
 a--;
 ++b;
 cout<<"a="<<a<<" b="<<b<<endl;
 a=b++;
 cout<<"a="<<a<<" b="<<b<<endl;
 b=--a;
 cout<<"a="<<a<<"b="<<b<<endl;
 return 0;
}
