#include <iostream>

char* my_strncpy(char* dest, const char* src, size_t n) {
    char* originalDest = dest;

    while (*src != '\0' && n > 0) {
        *dest = *src;
        src++;
        dest++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return originalDest;
}

int main() {
    setlocale(LC_ALL, "Russian");
    char dest[10];
    const char* src = "Hello, world!";
    size_t n = 5;

    char* result = my_strncpy(dest, src, n);
    result[n] = '\0';

    std::cout << "Копированная строка: " << result << std::endl;

    return 0;
}
