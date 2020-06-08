#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>

using namespace std;

const int STR_LENGTH = 80;
bool readLine(ifstream& in, char* buffer)
{
        buffer[0] = 0;
    in.getline(buffer, STR_LENGTH+1, '\n');
    if (in.fail())
    {
    if (buffer[0]>0)
        cout<<"Слишком длинная строка во входном файле"<<endl;
    return false;
    }
    return true;
}
void centerLine(char* buffer)
{
    int len=strlen(buffer);
    int shift = (STR_LENGTH-len)/2;
    if (shift==0)
    return;
    for (int i=len; i>=0; i--)
        buffer[i+shift]=buffer[i];
    for (int i=0; i<shift; i++)
        buffer[i]=' ';
}
int main(void)
{
    setlocale(LC_ALL,"Russian");
    ifstream in("D:\\in.txt");
    if (!in.is_open())
    {
        cout<<"Файл lermontov.txt не существует"<<endl;
        return -1;
    }

    ofstream out("D:\\out.txt");
    if (!out.is_open())
    {
        cout<<"Невозможно создать выходной файл out.txt"<<endl;
        return -2;
    }
     char buffer[STR_LENGTH+1];
     while (readLine(in, buffer))
    {
    centerLine(buffer);
    out<<buffer<<endl;
    }
    return 0;
}