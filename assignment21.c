#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int c;

    // Create source.txt with some content first
    f1 = fopen("source.txt", "w");
    fprintf(f1, "Hello, this is a test file!\n");
    fclose(f1);

    // Now open source.txt for reading
    f1 = fopen("source.txt", "r");
    if (f1 == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    f2 = fopen("destination.txt", "w");
    if (f2 == NULL) {
        printf("Error opening destination file\n");
        fclose(f1);
        return 1;
    }

    while ((c = fgetc(f1)) != EOF) {
        fputc(c, f2);
    }

    printf("File copied successfully\n");

    fclose(f1);
    fclose(f2);

    return 0;
}
