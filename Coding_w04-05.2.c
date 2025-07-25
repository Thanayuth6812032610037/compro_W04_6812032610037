#include <stdio.h>      //กรณีที่  2

void countCall() {
    int counter = 0;  // ตัวแปรธรรมดา จะ reset เป็น 0 ทุกครั้งที่เรียก
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();             // ครั้งที่ 1
    printf("After first call:\n");
    countCall();             // ครั้งที่ 2
    countCall();             // ครั้งที่ 3
    return 0;
}
