#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_operations.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./array_operations <operation> <array>\n");
        return 1;
    }

    // Example for parsing input (you'll need to implement the actual functionality)
    if (strcmp(argv[1], "sort") == 0) {
        // Call sort function (to be implemented)
    } else if (strcmp(argv[1], "max_min") == 0) {
        // Call find_max_min function (to be implemented)
    } else if (strcmp(argv[1], "search") == 0) {
        // Call linear_search function (to be implemented)
    } else if (strcmp(argv[1], "reverse") == 0) {
        // Call reverse_array function (to be implemented)
    } else {
        printf("Unknown operation: %s\n", argv[1]);
        return 1;
    }

    return 0;
}
