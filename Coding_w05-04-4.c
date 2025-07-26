#include <stdio.h>

int main() {
    // ประกาศตัวแปรเก็บข้อมูลของผู้ใช้ 3 คน
    char name[3];             // ชื่อ (ตัวอักษร 1 ตัว)
    int age[3];               // อายุ
    float height[3], weight[3]; // ส่วนสูง (cm), น้ำหนัก (kg)
    char grade[3];            // รหัสเกรด (A, B, C)

    // รับข้อมูลจากผู้ใช้ 3 คน โดยรับแบบบรรทัดเดียวต่อคน
    for (int i = 0; i < 3; i++) {
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงหัวตาราง
    printf("\n+-------+-----+-----------+-----------+-------+\n");
    printf("| Name  | Age | Height(cm)| Weight(kg)| Grade |\n");
    printf("+-------+-----+-----------+-----------+-------+\n");

    // แสดงข้อมูลของผู้ใช้ทีละคนในรูปแบบจัดตำแหน่ง
    for (int i = 0; i < 3; i++) {
        printf("|   %-2c  | %-3d |   %7.1f |   %7.1f |   %-2c  |\n",
               name[i], age[i], height[i], weight[i], grade[i]);
    }

    // แสดงขอบล่างของตาราง
    printf("+-------+-----+-----------+-----------+-------+\n");

    return 0;
}