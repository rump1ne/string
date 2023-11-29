#include <iostream>

int my_strncmp(const char* str1, const char* str2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (str1[i] == '\0' || str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }
    return 0;
}
   

int main() {
    const char* str1 = "apple";
    const char* str2 = "banana";
    size_t n = 3;


    int result = my_strcmp(str1, str2);

    if (result == 0) {
        std::cout << "Строки идентичны" << std::endl;
    }
    else if (result < 0) {
        std::cout << "Первая строка меньше второй" << std::endl;
    }
    else {
        std::cout << "Вторая строка меньше первой" << std::endl;
    }

    int result = my_strncmp(str1, str2, n);

    if (result == 0) {
        std::cout << "Первые " << n << " символа идентичны" << std::endl;
    }
    else if (result < 0) {
        std::cout << "Первые " << n << " символа первой строки меньше второй" << std::endl;
    }
    else {
        std::cout << "Первые " << n << " символа второй строки меньше первой" << std::endl;
    }



    return 0;
}
