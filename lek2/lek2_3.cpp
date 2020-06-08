#include <iostream>
#include <locale.h>
using namespace std;
// Формирование названия оценки
// по ее численному значению:
// 5 - отлично, 4 - хорошо,
// 3 - удовлетворительно,
// 2 - неудовлетворительно
int main(void)
{
 setlocale(LC_ALL, "Russian");
 int mark; // оценка
 cout<<"Введите оценку: ";
 cin>>mark;
switch(mark)
 {
 case 5:
 cout<<"Оценка отлично"<<endl;
 break;
 case 4:
 cout<<"Оценка хорошо"<<endl;
 break;
 default:
 cout<<"Оценки "<<mark<<" не бывает"<<endl;
 }
 return 0;
}
