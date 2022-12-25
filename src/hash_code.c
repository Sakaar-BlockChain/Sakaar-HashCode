#include "hash_code.h"

struct hash_code get_hash_code(unsigned code) {
    switch (code) {
        case HASH_SHA256:
            return sha256_code;
    }
    exit(0);
}