#include <stdio.h>

int main(void)
{
    char word[10], letter;
    int is_found = 0;
    printf("Enter string: "); scanf("%s", &word);
    printf("Enter string: "); scanf("%s", &letter);
    for(int i = 0; i < 10; i++)
    {
        if(word[i] == letter)
        {
            printf("Letter '%c' found at %d\n", letter, i);
            is_found = 1;
        }
    }
    if(is_found)
    {
    printf("End");
    }
    else
    {
    printf("Not found");
    }
}