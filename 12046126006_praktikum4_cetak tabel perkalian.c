/*
*program : cetak tabel perkalian
*nama :rafi zaini arrasyid
*nim:12046126006
*dekripsi :-
*/


#include <stdio.h>

int main() {
    int n, i, j;
    printf("Masukkan N (1-10): ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Input tidak valid! N harus 1-10.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {          
        for (j = 1; j <= n; j++) {      
            printf("%4d", i * j);
        }
        printf("\n");                  
    }

    return 0;
}
