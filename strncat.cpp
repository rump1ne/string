#include <iostream>

const char* my_strstr(const char* haystack, const char* needle) {
    if (!haystack || !needle) {
        return haystack;  // Возвращаем haystack указывает что бы отсутствовали совпадения
    }

    for (int i = 0; haystack[i] != '\0'; i++) {
        int j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
            j++;
        }

        if (needle[j] == '\0') {
            return &haystack[i];
        }
    }

    return haystack;  // Возвращаем haystack указывает на отсутствие совпадения
}

int main() {
    setlocale(LC_ALL, "Rus");
    const char* haystack = "Это пример текста";
    const char* needle = "Пример";

    const char* result = my_strstr(haystack, needle);

    if (result != haystack) {
        std::cout << "Подстрока найдена в индексе:" << (result - haystack) << std::endl;
    }
    else {
        std::cout << "Подстрока не найдена" << std::endl;
    }

    return 0;
}
