#include <assert.h>
#include <iostream>

using namespace std;

int findMax(const int* arr, int length)
{
    assert(length>0);
    int max=arr[0];
    for (int i=1; i<length; i++)
    {
        if (arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main()
{
    const int size = 5;
    int mas[size],n = 0;
        cout<<"enter 5 numbers\n";
        cin>>mas[0]>>mas[1]>>mas[2]>>mas[3]>>mas[4];
    int result = findMax(mas, size);
        cout<<"max number: "<<result;
    return 0;
}