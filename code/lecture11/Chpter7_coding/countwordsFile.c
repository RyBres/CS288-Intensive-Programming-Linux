#include <stdio.h>
#include <ctype.h>

int countWords(FILE *file);

int main() {
    FILE *file;
    char filename[100];

    // Prompt the user to enter the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Count the words in the file
    int wordCount = countWords(file);
    printf("Total number of words: %d\n", wordCount);

    // Close the file
    fclose(file);
    return 0;
}

// Function to count words in a file
int countWords(FILE *file) {
    int count = 0;
    char ch;
    int inWord = 0; // Flag to track if we are in a word

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            // If we encounter whitespace, we end a word
            if (inWord) {
                inWord = 0;
                count++;
            }
        } else {
            // If we encounter a non-space character, we start a word
            inWord = 1;
        }
    }

    // Count the last word if the file does not end with whitespace
    if (inWord) {
        count++;
    }

    return count;
}
