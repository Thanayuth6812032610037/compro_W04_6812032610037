#include <stdio.h>  //กรณีที่ 2

int main() {
    float score = 90.5;
    printf("Case 2: score = %.1f\n", score);
    return 0;
}
        //  กรณีที่ 2 (float) ได้ 90.5 ตามจริง เพราะ float รองรับเลขทศนิยม

        //  ทำไมต้องเลือก Data Type ให้ถูกต้อง?  = ถ้าเลือกผิด → ข้อมูลอาจ ผิดพลาด, ถูกตัดทิ้ง, หรือไม่สามารถใช้คำนวณได้ถูกต้อง

        //  อธิบายและสรุปผลที่ได้จากการทดลอง = การเลือก Data Type ที่ไม่เหมาะสม จะทำให้ข้อมูลเพี้ยน ถ้าใส่เลขทศนิยมให้ตัวแปร int → ได้แค่ส่วนจำนวนเต็มเท่านั้น

