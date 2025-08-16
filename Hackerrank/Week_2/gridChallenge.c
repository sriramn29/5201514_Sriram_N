#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
 
// Helper function to compare two characters for qsort.
// It returns a negative value if a < b, 0 if a == b, and a positive value if a > b.
int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Function to check if columns are sorted.
bool areColumnsSorted(char** grid, int numRows, int numCols) {
    // Iterate through each column
    for (int col = 0; col < numCols; col++) {
        // Iterate through rows in the current column, up to the second-to-last row.
        for (int row = 0; row < numRows - 1; row++) {
            // Compare the current character with the character directly below it.
            if (grid[row][col] > grid[row + 1][col]) {
                return false; // If a character is greater than the one below it, the column isn't sorted.
            }
        }
    }
    return true; // If the loops complete without finding any unsorted columns, the grid is sorted.
}

// The main function for the grid challenge.
// It sorts each row and then checks if the columns are sorted.
char* gridChallenge(int grid_count, char** grid) {
    // Determine the number of columns from the first row's length.
    int numCols = strlen(grid[0]);

    // Sort each row alphabetically.
    for (int i = 0; i < grid_count; i++) {
        // qsort requires the array, its size, the size of each element, and a comparison function.
        // We use strlen(grid[i]) to get the correct size of the row string.
        qsort(grid[i], strlen(grid[i]), sizeof(char), compareChars);
    }

    // Check if the columns are sorted after sorting the rows.
    if (areColumnsSorted(grid, grid_count, numCols)) {
        return "YES";
    } else {
        return "NO";
    }
}
int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int t = parse_int(ltrim(rtrim(readline())));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n = parse_int(ltrim(rtrim(readline())));

        char** grid = malloc(n * sizeof(char*));

        for (int i = 0; i < n; i++) {
            char* grid_item = readline();

            *(grid + i) = grid_item;
        }

        char* result = gridChallenge(n, grid);

        fprintf(fptr, "%s\n", result);
    }

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

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
