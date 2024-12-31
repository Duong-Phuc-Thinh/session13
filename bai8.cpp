#include <stdio.h>
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a > 0 ? a : -a;
}

int main() {
    int num1, num2;

    printf("Nhap hai so nguyen bat ky:\n");
    printf("So thu nhat: ");
    scanf("%d", &num1);
    printf("So thu hai: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, gcd);

    return 0;
}

