#include "types.h"
#include "user.h"

// Fork file 2
int main() {

    for(int i = 0; i < 4; i++) {
        if (fork() == 0) { // Child code in here
            exit();
        }
    }

    printf(1, "Happy Halloween\n");
    exit();
}