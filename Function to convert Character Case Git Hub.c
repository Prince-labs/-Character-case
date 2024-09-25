#include <stdio.h>

// Function prototype
char convert(char ch);

int main() {
    char inputChar, outputChar;

    // Prompt the user for input
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    // Call the convert function
    outputChar = convert(inputChar);

    // Output the result
    printf("Converted character: %c\n", outputChar);

    return 0;
}

// Function to convert character case
char convert(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A'; // Convert to uppercase
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a'; // Convert to lowercase
    } else {
        return ch; // Return the character unchanged if it's not a letter
    }
}
