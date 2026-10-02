#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char searchWord[50];
    char line[200];
    int found = 0;
    int lineNumber = 0;

    printf("===== Search Text in File =====\n");

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open data.txt!\n");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%49s", searchWord);

    while (fgets(line, sizeof(line), file) != NULL)
    {
        lineNumber++;

        if (strstr(line, searchWord) != NULL)
        {
            printf("\nWord found in line %d: %s", lineNumber, line);
            found = 1;
        }
    }

    fclose(file);

    if (found == 0)
    {
        printf("\nWord not found in the file.\n");
    }

    return 0;
}
