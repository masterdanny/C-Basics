#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char buffer[10];

    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Truncate the string if it is too long
    if (strlen(buffer) > sizeof(buffer) - 1)
    {
        printf("Truncating string to 10 characters");
        buffer[sizeof(buffer) - 1] = '\0';
    }

    printf("You entered: %s\n", buffer);

    return 0;
}
