#include <stdio.h>

int main() {
    // ประกาศตัวแปรของแต่ละคน
    char name1, name2, name3;
    int age1, age2, age3;
    float height1, height2, height3;
    float weight1, weight2, weight3;
    char grade1, grade2, grade3;

    // รับข้อมูลจากผู้ใช้ 3 คน (คนละบรรทัด)
    printf("Enter data (Name Age Height Weight Grade) for 3 people:\n");

    scanf(" %c %d %f %f %c", &name1, &age1, &height1, &weight1, &grade1);
    scanf(" %c %d %f %f %c", &name2, &age2, &height2, &weight2, &grade2);
    scanf(" %c %d %f %f %c", &name3, &age3, &height3, &weight3, &grade3);

    // แสดงผลข้อมูลอย่างเป็นระเบียบ
    printf("\n--- Summary of Input ---\n");

    printf("Name: %c | Age: %d | Height: %.1f cm | Weight: %.1f kg | Grade: %c\n", name1, age1, height1, weight1, grade1);
    printf("Name: %c | Age: %d | Height: %.1f cm | Weight: %.1f kg | Grade: %c\n", name2, age2, height2, weight2, grade2);
    printf("Name: %c | Age: %d | Height: %.1f cm | Weight: %.1f kg | Grade: %c\n", name3, age3, height3, weight3, grade3);

    return 0;
}