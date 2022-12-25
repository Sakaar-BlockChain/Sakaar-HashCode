#include "hash_code.h"

int main() {
    struct string_st *str = string_new();
    string_set_str(str, "LOL", 3);

    sha256_code._code(str, str);

    for (size_t i = 0; i < str->size; i++)printf("%c", str->data[i]);
}