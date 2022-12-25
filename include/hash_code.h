#ifndef HASH_CODE_H
#define HASH_CODE_H

#include "struct.h"

#define HASH_SHA256 1

struct hash_code{
    void (*_code)(struct string_st *, const struct string_st *);
};

extern struct hash_code sha256_code;
struct hash_code get_hash_code(unsigned code);

#endif //HASH_CODE_H
