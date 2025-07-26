#include <stdio.h>

int main() {
    char name[30];       // ชื่อ (string) สูงสุด 30 ตัวอักษร
    int age;             // อายุ (จำนวนเต็ม)
    float height;        // ส่วนสูง (เซนติเมตร)

    char subject;        // ชื่อวิชา (ตัวอักษร 1 ตัว เช่น M)
    float grade;         // เกรด (ตัวเลขทศนิยม)
    char symbol;         // สัญลักษณ์เกรด เช่น 'A', 'B'

    // รับค่าข้อมูลส่วนบุคคล
    printf("Enter your name, age, and height (e.g., John 18 167.5):\n");
    scanf("%s %d %f", name, &age, &height);

    // รับค่าข้อมูลผลการเรียน
    printf("Enter subject (1 letter), grade (float), and grade symbol (1 char):\n");
    scanf(" %c %f %c", &subject, &grade, &symbol);  // เว้นวรรคหน้า %c ตัวแรกเพื่อกิน newline

    // แสดงผลบรรทัดที่ 1
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลบรรทัดที่ 2
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}