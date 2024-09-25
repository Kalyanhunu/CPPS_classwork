//Program Name: Write a function to reverse a given string and use it to check whether the given string is a palindrome.

//Program Date: 25/09/24

#include <stdio.h>
#include <string.h>

void reverseString(char str[]);

main()
{
    char str[20];
    int i, length, flag = 0;

    printf("Enter your name: ");
    scanf("%s", str);

    reverseString(str);

    length = strlen(str);  

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if(flag)
    {
        printf("\n%s is not a Palindrome", str);
    }
    else
    {
        printf("\n%s is a Palindrome", str);
    }

}


void reverseString(char str[])
{
    int i, length;
    char temp;
    length = strlen(str);  

    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("\nReversed string: %s", str);  
}
