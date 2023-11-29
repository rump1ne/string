#include <iostream>

int my_strcmp(const char* str1, const char* str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 0; 
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
