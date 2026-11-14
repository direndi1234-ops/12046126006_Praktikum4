/*
*program :mencetak pola segitiga bintang
*nama :rafi zaini arrasyid
*nim:12046126006
*dekripsi :nested for loop untuk pola segitiga bintang
*/
 
 
#include <stdio.h>

int main() {
 
    int N;
 
    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukkan jumlah baris: ");
    scanf("%d", &N);

for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
     printf("* ");
}
   
    printf("\n");  
}
return 0;
}
