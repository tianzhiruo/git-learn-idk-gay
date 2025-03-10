#include <stdio.h>

int print(char *str);

int main(void) {
    print("Hello world");
    return 0;
}

int print(char *str) {
    printf("%s", str);
}

