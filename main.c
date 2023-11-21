
#include <stdio.h>
#include "get_next_line.h"

int main(void) {
    int fd = open("get_next_line.h", O_RDONLY);

    if (fd == -1) {
        return 1;
    }

    char *ligne;

    while ((ligne = get_next_line(fd)) != NULL) {
        printf("%s", ligne);
        free(ligne);
    }
    close(fd);
    return 0;
}
