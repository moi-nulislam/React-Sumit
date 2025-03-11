#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Hello World";
    
    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            freq[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            freq[str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (freq[i] > 0) 
        {
            printf("%c appears %d times\n", 'a' + i, freq[i]);
        }
    }



    return 0;
}
