#include <stdio.h>

int main() {
    double a, b;
    char amal;

    printf("Ikkita son va amalni kiriting (masalan: 5 + 3): ");
    scanf("%lf %c %lf", &a, &amal, &b);

    switch (amal) {
        case '+': printf("Natija: %.2f\n", a + b); break;
        case '-': printf("Natija: %.2f\n", a - b); break;
        case '*': printf("Natija: %.2f\n", a * b); break;
        case '/':
            if (b == 0) printf("Xato: 0 ga bo'lib bo'lmaydi!\n");
            else printf("Natija: %.2f\n", a / b);
            break;
        default: printf("Noto'g'ri amal belgisi!\n");
    }

    return 0;
}