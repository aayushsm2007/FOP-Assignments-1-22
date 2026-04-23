#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100], sub[100];
    int len, i;

    printf("Enter main string: ");
    scanf("%s", str1);

    len = strlen(str1);
    printf("Length = %d\n", len);

    for(i = 0; i < len; i++)
        rev[i] = str1[len - i - 1];
    rev[i] = '\0';

    printf("Reverse = %s\n", rev);

    if(strcmp(str1, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    printf("\nEnter another string for comparison: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    printf("\nEnter substring to search: ");
    scanf("%s", sub);

    if(strstr(str1, sub) != NULL)
        printf("Substring Found\n");
    else
        printf("Substring Not Found\n");

    return 0;
}
