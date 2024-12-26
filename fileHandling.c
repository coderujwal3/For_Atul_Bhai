#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    // Get the source file name from the user
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);            // sourceFilename = "source.txt"

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        exit(EXIT_FAILURE);
    }

    // Get the destination file name from the user
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);       // destinationFilename = "destination.txt"

    // Open the destination file in write mode
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Read data from the source file and write it to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Data has been successfully copied from %s to %s.\n", sourceFilename, destinationFilename);

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
