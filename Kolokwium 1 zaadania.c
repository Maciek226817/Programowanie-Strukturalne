ZADANIA  (wszytkie razem)(main na koncu)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Zadanie_1 () {
    int a, b;
    printf("Zadanie 1: \n");
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    int delta = b * b - 32 * a;
    if (delta < 0) {
        printf("\nBrak rozwiazan");
        return;
    }
    if (delta == 0) {
        printf("\nJedyne rozwiazanie to: %f", (-b/(2*a)));
        return;
    }
    if (delta > 0) {
        printf("\nDwa rozwiazania to: %f oraz %f", (-b - sqrt(delta))/(2*a),(-b + sqrt(delta))/(2*a));
        return;
    }
}

void Zamien(int a[], int b[]) {
    printf("\n\nZadanie 2:");
    int x;
    for(int i = 0; i < 5; i++) {
        x = a[i];
        a[i] = b[i];
        b[i] = x;
    }
    printf("\nTablica 1: ");
    for(int i = 0; i < 5; i++) {
        printf("%d   ", a[i]);
    }
    printf("\nTablica 2: ");
    for(int i = 0; i < 5; i++) {
        printf("%d   ", b[i]);
    }
}

void Zadanie_3() {
    printf("\n\nZadanie 3:");
    int n;
    printf("\nPodaj nr dnia tygodnia: ");
    scanf("%d", &n);
    if(n == 1)
        printf("Ten dzien to niedziela.");
    else if(n==2)
        printf("Ten dzien to poniedzialek.");
    else if(n==3)
        printf("Ten dzien to wtorek.");
    else if(n==4)
        printf("Ten dzien to sroda.");
    else if(n==5)
        printf("Ten dzien to czwartek.");
    else if(n==6)
        printf("Ten dzien to piatek.");
    else if(n==7)
        printf("Ten dzien to sobota.");
    else
        printf("Nie ma takiego dnia.");
    return;
}

void Zadanie_4(int a[]) {
    printf("\n\nZadnaie 4:\n");
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < 10; i++)
        for(int j = i + 1; j < 10; j++) {
            if(a[i] == a[j]) {
                if(b[i]!=-1) {
                    b[i] = 1;
                    b[j] = -1;
                } else {
                    b[j] = -1;
                }
            }
        }
    for(int i = 0; i<10; i++) {
        if(b[i] == 1)
            printf("%d, ", a[i]);
    }


}

int main() {
    Zadanie_1();
    int tab1[5] = {1, 2, 3, 4, 5};
    int tab2[5] = {3, 5, 1, 2, 7};
    Zamien(tab1, tab2);
    Zadanie_3();
    int tab3[10] = {1, 0, 3, 2, 1, 12, 12, 8, 3, 12};
    Zadanie_4(tab3);
    return 0;
}
