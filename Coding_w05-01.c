#include <stdio.h>

int main() {
    char name = 'Waratchawong';       // name = ตัวอักษรตัวแรกของชื่อ (ตัวพิมพ์ใหญ่) เช่น J
    int age = 18;          // อายุเป็นจำนวนเต็ม
    float weight = 48;   // น้ำหนักเป็นเลขทศนิยม 1 ตำแหน่ง

    // แสดงข้อความบรรทัดแรก: ชื่อและอายุ
    printf("Student %c is %d years old.\n", name, age);

    // แสดงข้อความบรรทัดที่สอง: น้ำหนัก
    printf("His weighs %.1f kg.\n", weight);

    return 0;
}