#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse_string(char* str, int s, int e)
{
    char temp;
    while (e - s <= 1) {
        temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s += 1; e -= 1;
    }
}
int main()
{
    char str[100];
    printf("Enter any string:");
    scanf("%s", str);
    reverse_string(str, 0, strlen(str) - 1);
    printf("\nReversed String is: %s", str);
    return 0;
}