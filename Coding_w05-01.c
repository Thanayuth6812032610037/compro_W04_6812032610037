#include <stdio.h>

int main() {
    char name = 'whan';          // ตัวแปรเก็บชื่อ (ตัวอักษรตัวแรกของชื่อ)
    int age = 19;             // ตัวแปรเก็บอายุ (จำนวนเต็ม)
    float weight = 55.5;      // ตัวแปรเก็บน้ำหนัก (เลขทศนิยม)

    // แสดงผลบรรทัดแรก: ชื่อนักเรียนและอายุ
    printf("Student %c is %d years old.\n", name, age);

    // แสดงผลบรรทัดที่สอง: น้ำหนักของนักเรียน
    printf("His weight is %.1f kg.\n", weight);

    return 0;
}
