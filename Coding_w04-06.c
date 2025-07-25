#include <stdio.h>

const int GLOBAL_RATE = 10;  // Global constant

void calculate() {
    const int LOCAL_BONUS = 50;  // Local constant

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    // แสดง GLOBAL_RATE ได้เพราะเป็น global
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);

    // LOCAL_BONUS จะ error ถ้า uncomment เพราะอยู่นอกขอบเขต
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);

    return 0;
}

//1. ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
//      รายการ	                                GLOBAL_RATE	                                           LOCAL_BONUS
//     ระดับการประกาศ	                       Global (บรรทัดที่ 2)	                            Local (บรรทัดที่ 5 ภายในฟังก์ชัน calculate)
//     การเข้าถึง	                           ทุกฟังก์ชันในไฟล์เข้าถึงได้	                             ใช้ได้เฉพาะในฟังก์ชันที่ประกาศเท่านั้น
//     อายุการใช้งาน	                      ตลอดการทำงานของโปรแกรม	                        แค่ตอนฟังก์ชัน calculate() ทำงาน


 //2. เกิดอะไรขึ้นถ้าเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;?
//เกิด Compile-time error เพราะ: ตัวแปรที่ประกาศด้วย const ไม่สามารถเปลี่ยนค่าได้
//เมื่อพยายามเขียนใหม่ เช่น GLOBAL_RATE = 20; → ❌ error: assignment of read-only variable


 //3. ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?เพราะ:
//LOCAL_BONUS ถูกประกาศเป็นตัวแปร ภายในฟังก์ชัน calculate()
//ตัวแปร local จะ มีขอบเขต (scope) จำกัดอยู่แค่ในฟังก์ชันที่มันถูกประกาศ
//เมื่อพยายามเรียกใช้ LOCAL_BONUS จาก main() → ❌ Compile error: undeclared identifier


 //4. อภิปราย และสรุปผลที่ได้จากการทดลอง
//ตัวแปร const เป็นค่าคงที่ ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศconst สามารถประกาศได้ทั้งระดับ global และ local

//Global const ใช้งานได้ทั่วทั้งไฟล์, ส่วน local const ใช้งานได้เฉพาะในฟังก์ชันที่ประกาศ

///การเข้าถึงตัวแปรนอกขอบเขตจะทำให้เกิด compile error

//การเข้าใจเรื่อง scope ของตัวแปรเป็นสิ่งสำคัญมากในการเขียนโปรแกรม


                // สรุป

//onst คือค่าคงที่ เปลี่ยนไม่ได้หลังจากกำหนด

//ช้ได้ทั้ง global และ local ขึ้นอยู่กับว่าประกาศไว้ที่ไหน

//เข้าใจ ขอบเขต (scope) สำคัญมากในการเขียนโปรแกรม

//หากพยายามเปลี่ยนค่าหรือใช้ตัวแปรนอกขอบเขต → โปรแกรมจะ compile ไม่ผ่าน



