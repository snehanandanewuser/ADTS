#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];

    // Input: Get the string
    printf("Enter a string in uppercase: ");
    fgets(str, sizeof(str), stdin);

    // Conversion: Convert each character to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Output: Display the converted string
    printf("String in lowercase: %s\n", str);
    return 0;
}
