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
    const char* haystack = "это пример текста";
    const char* needle = "пример";

    const char* result = my_strstr(haystack, needle);

    if (result != haystack) {
        std::cout << "подстрока найденна в индексе:" << (result - haystack) << std::endl;
    }
    else {
        std::cout << "подстрока не найдена" << std::endl;
    }

    return 0;
}
