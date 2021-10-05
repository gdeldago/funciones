#include <stdio.h>
#include <stdlib.h>

char mayusculas(char letra);

void main()
{
    printf("%c\n", 'c');
    printf("%c\n", mayusculas('Z'));

    return;
}

char mayusculas(char letra)
{
    if (letra >= 'a' && letra <= 'z')
        return letra - 32;
    return letra;
}
