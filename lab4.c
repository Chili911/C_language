//Write the code that prints all even numbers from 100 to 0 (including 100 and 0). Then
//rewrite the code to exclude 100 and 0

#include <stdio.h>

int main() {
    for (int num = 2; num <= 100; num += 2) {
        printf("%d\n", num);
    }
    return 0;
}
