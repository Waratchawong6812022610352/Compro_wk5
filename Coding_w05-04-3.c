#include <stdio.h>

int main() {
    char name[3];
    int age[3];
    float height[3], weight[3];
    char grade[3];

    // รับข้อมูลผู้ใช้ 3 คน (บรรทัดละคน)
    for (int i = 0; i < 3; i++) {
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงหัวตาราง
    printf("\n+-------+-----+-----------+-----------+-------+\n");
    printf("| Name  | Age | Height(cm)| Weight(kg)| Grade |\n");
    printf("+-------+-----+-----------+-----------+-------+\n");

    // แสดงข้อมูลเป็นตาราง
    for (int i = 0; i < 3; i++) {
        printf("|   %-2c  | %-3d |   %7.1f |   %7.1f |   %-2c  |\n", name[i], age[i], height[i], weight[i], grade[i]);
    }

    printf("+-------+-----+-----------+-----------+-------+\n");

    return 0;
}