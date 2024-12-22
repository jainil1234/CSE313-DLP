#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", input);

    
    if (strlen(input) < 2) {
        printf("Invalid\n");
        return 0;
    }

    
    while (input[i] == 'a') {
        i++;
    }

    
    if (input[i] == 'b' && input[i + 1] == 'b' && input[i + 2] == '\0') {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
