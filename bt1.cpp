#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Nhap hai so: ");
    scanf("%d %d", &a, &b);
    printf("Tong hai so la: %d\n", tinhTong(a, b));
    return 0;
}
