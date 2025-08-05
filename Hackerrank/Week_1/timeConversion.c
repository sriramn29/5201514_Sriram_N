// Program to convert the given a time in 12-hour AM/PM format to military (24-hour) time.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototyping
char* readline();
char* timeConversion(char* s);


// My code contribution made for the timeConversion function
char* timeConversion(char* s) {
    
    int hour, minute, second;
    char am_pm[3]; // Strings require a null terminator (\0) to mark their end. Since "AM" and "PM" are two characters, a third byte is needed for this terminator to prevent a buffer overflow. 
    
    // Use sscanf to parse the string into its components
    sscanf(s, "%2d:%2d:%2d%s", &hour, &minute, &second, am_pm); // %2d reads a two-digit integer
    
    // Case 1: PM (and not 12 PM)
    if (strcmp(am_pm, "PM") == 0 && hour != 12) {
        hour += 12;
    }
    // Case 2: AM (and it's 12 AM, i.e., midnight)
    else if (strcmp(am_pm, "AM") == 0 && hour == 12) {
        hour = 0;
    }
    // Allocate memory for the new 24-hour time string named military_time.
    // The format is HH:MM:SS, which is 8 characters, plus a null character at the end of the string
    char* military_time = (char*)malloc(9 * sizeof(char));
    
    // Check allocation failure
    if (military_time == NULL) {
        return NULL;
    }

    // Use sprintf to format the new time string into the allocated memory
    // %02d ensures two-digit formatting with a leading zero
    sprintf(military_time, "%02d:%02d:%02d", hour, minute, second);

    // Returning the newly created string
    return military_time;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
