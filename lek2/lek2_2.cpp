#include <iostream>
using namespace std;
// Рассчитываем max(a,b)
int main(void)
{
 double a, b;
 cout<<"Calculating max(a,b). "<<
 "Enter a,b: "<<endl;
 cin>>a>>b;
 double max = a > b ? a : b;
 cout<<"max(a,b)="<<max<<endl;
 return 0;
}