#include <stdio.h>

int main() {
    char name = 'whan';          // ตัวแปรเก็บชื่อ (ตัวอักษรตัวแรกของชื่อ)
    int age = 19;             // ตัวแปรเก็บอายุ (จำนวนเต็ม)
    float weight = 55.5;      // ตัวแปรเก็บน้ำหนัก (เลขทศนิยม)

    
    printf("Student %c is %d years old.\n", name, age);     // แสดงผลบรรทัดแรก: ชื่อนักเรียนและอายุ
    printf("His weight is %.1f kg.\n", weight);     // แสดงผลบรรทัดที่สอง: น้ำหนักของนักเรียน

    return 0;
}
