#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int i = 0;
    char input[50];
    char c;

    printf("Masukkan kata: ");
    scanf("%s",&input);


    while(input[i])
    {
        c=input[i];
        putchar(toupper(c));
        i++;
    }
    return 0;
}

