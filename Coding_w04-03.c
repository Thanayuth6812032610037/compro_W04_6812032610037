#include <stdio.h>

int main() {
    char nameInitial = 'w';              // ถ้าตัวอักษร 1 ตัว ใช้ char
    int age = 19;                        // จำนวนเต็ม ใช้ int
    float weight = 52.50;                 // ทศนิยม ใช้ float
    char gender[] = "male";            // ข้อความ ใช้ string

    // แสดงผลลัพธ์
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);   // แสดงทศนิยม 2 ตำแหน่ง
    printf("gender = %s\n", gender);     // แสดง string

    return 0;
}
