#include <stdio.h>

int main() {
    // ประกาศตัวแปร
    char name[3];
    int age[3];
    float height[3], weight[3];
    char grade[3];

    // รับข้อมูล
    for (int i = 0; i < 3; i++) {
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // พิมพ์หัวตาราง
    printf("---------------------------------------------------------------\n");
    printf("| Name | Age | Height(cm) | Weight(kg) | Grade Code |\n");
    printf("---------------------------------------------------------------\n");

    // พิมพ์ข้อมูลแต่ละคน
    for (int i = 0; i < 3; i++) {
        printf("|  %-3c | %-3d |    %-6.1f |    %-6.1f |     %-5c   |\n",
               name[i], age[i], height[i], weight[i], grade[i]);
    }

    printf("---------------------------------------------------------------\n");

    return 0;
}
