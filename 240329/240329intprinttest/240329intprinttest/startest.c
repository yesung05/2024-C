#include <stdio.h>
#include <Windows.h>

int main(void) {
    while (1) {
        for (int i = 0; i < 70; i++) {
            for (int c = 0; c < i; c++) {
                printf(" ");
            }
            printf("*\n");
            Sleep(10);
        }

        for (int i = 70; i > 0; i--) {
            for (int c = 0; c < i; c++) {
                printf(" ");
            }
            printf("*\n");
            Sleep(10);
        }
    }

    return 0;
}