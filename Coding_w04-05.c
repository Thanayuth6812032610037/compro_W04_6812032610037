#include <stdio.h>        //กรณีที่  1

void countCall() {
    static int counter = 0;  // ตัวแปร static เก็บค่าไว้ตลอด ไม่ reset ทุกครั้ง
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


 //1. ผลลัพธ์ที่ได้ต่างกันอย่างไร? เพราะเหตุใด?  กรณีที่ 1 (static) ตัวแปร counter ยังคงจำค่าครั้งก่อนหน้าได้
//กรณีที่ 2 (non-static) ตัวแปร counter ถูก reset ทุกครั้งที่เรียกฟังก์ชัน


//2. ความแตกต่างของ Non-Static Variable? 
//ตัวแปร non-static จะถูกสร้างใหม่และถูกกำหนดค่าใหม่ทุกครั้งเมื่อฟังก์ชันถูกเรียกจึงไม่สามารถนับสะสมค่าได้


//3. อธิบายและสรุปผล:

//      ประเภทตัวแปร	            พฤติกรรม                           ใช้เมื่อ
//         static	           เก็บค่าค้างข้ามการเรียกฟังก์ชัน        ต้องการนับจำนวน, จำสถานะ
//       non-static	            reset ค่าทุกครั้ง	            ใช้คำนวณเฉพาะในครั้งเดียว
