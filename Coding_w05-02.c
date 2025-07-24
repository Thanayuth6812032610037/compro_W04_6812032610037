#include <stdio.h>

int main() {
    char name[30];       // เก็บชื่อ (สูงสุด 29 ตัวอักษร + null)
    int age;             // เก็บอายุ
    float height;        // เก็บส่วนสูง

    char subject;        // ชื่อวิชา (ตัวอักษร 1 ตัว)
    float grade;         // เกรด (ทศนิยม)
    char symbol;         // ตัวแทนเกรด เช่น 'A'

    // รับข้อมูลบรรทัดที่ 1: ชื่อ อายุ ส่วนสูง
    scanf("%s %d %f", name, &age, &height);

    // รับข้อมูลบรรทัดที่ 2: ชื่อวิชา เกรด ตัวแทนเกรด
    scanf(" %c %f %c", &subject, &grade, &symbol); // เว้นวรรคหน้าตัวอักษรเพื่อหลบ newline

    // แสดงผลบรรทัดที่ 1
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลบรรทัดที่ 2
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}
