#include "types.h"
#include "user.h"

// Strings
int main() {

    char alphabet[26];

    for(int i = 97; i < (97+26); i++) {
        alphabet[i-97] = (char)i;
    }

    strlen(alphabet);
}