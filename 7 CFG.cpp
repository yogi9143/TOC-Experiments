#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    // Check if the length of the string is less than 4
    if (n < 4) 
	{
        printf("The string does not belong to the language defined by the CFG\n");
        return 0;
    }

    // Search for the substring "101"
    int found = 0;
    for (i = 0; i <= n - 3; i++) 
	{
        if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1') 
		{
            found = 1;
            break;
        }
    }

    // If "101" is not found, the string is invalid
    if (!found) 
	{
        printf("The string does not belong to the language defined by the CFG\n");
        return 0;
    }

    // Check characters before "101"
    for (j = 0; j < i; j++) {
        if (str[j] != '0' && str[j] != '1') {
            printf("The string does not belong to the language defined by the CFG\n");
            return 0;
        }
    }

    // Check characters after "101"
    for (j = i + 3; j < n; j++) {
        if (str[j] != '0' && str[j] != '1') {
            printf("The string does not belong to the language defined by the CFG\n");
            return 0;
        }
    }

    // If all checks are passed, the string is valid
    printf("The string belongs to the language defined by the CFG\n");
    return 0;
}
