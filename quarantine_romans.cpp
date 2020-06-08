#include <stdio.h>
#include <stdlib.h>
 
#define roman 7
 
char roman_nums[roman] = { 'I','V','X','L', 'C', 'D', 'M' };
int arabic_vals[roman] = { 1, 5, 10, 50, 100, 500, 1000 };
 
int main()
{
    int i = 0;
    int num = 0;
 
    char romnum[BUFSIZ];
    char *a = romnum;
 
    printf("arabian number: ");
    scanf("%d", &num);
 
    for(i = roman - 1; i >= 0; --i)
    {
        while(num >= arabic_vals[i])
        {
            if((num >= arabic_vals[i] * 4) && (i != roman))
            {
                num -= arabic_vals[i] * 4;
                *a++ = roman_nums[i];
                *a++ = roman_nums[i + 1];
            }
            else
            {
                num -= arabic_vals[i];
                *a++ = roman_nums[i];
            }
        }
    }
 
    *a = '\0';
 
    printf("roman number: %s\n\n", romnum);   
}