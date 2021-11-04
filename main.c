#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[20];
    printf("Please write a string: \n");
    gets(metin);
    printf("Your sentence in reverse: \n");
    printf("%s", strrev(metin));
}
