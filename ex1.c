#include "types.h"
#include "user.h"

// Fork file 1
int main() {

    for(int i = 0; i < 4; i++) {
        if (fork() == 0) { // Child code in here
            printf(1, "Child trap inbound\n");
        }

        wait();
    }

    printf(1, "Trap inbound\n");
}