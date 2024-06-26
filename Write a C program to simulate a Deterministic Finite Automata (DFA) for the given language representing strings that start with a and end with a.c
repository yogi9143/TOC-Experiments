#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char input_string[MAX_LEN];
    int state = 0;

    printf("Enter a string: ");
    scanf("%s", input_string);

    int len = strlen(input_string);
    for (int i = 0; i < len; i++) {
        if (state == 0 && input_string[i] == 'a')
            state = 1;
        else if (state == 1 && input_string[i] != 'a')
            state = 2;
    }

    if (state == 1 && input_string[len - 1] == 'a')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
