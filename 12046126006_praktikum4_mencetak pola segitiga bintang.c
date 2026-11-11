/*
*program :mencetak pola segitiga bintang
*nama :rafi zaini arrasyid
*nim:12046126006
*dekripsi :nested for loop untuk pola segitiga bintang
*/


#include <stdio.h>
int main() {

int N;

printf("== CETAK POLA SEGITIGA BINTANG ===\n");
printf("Masukkan jumlah baris: ");
scanf("%d", &N);
// Loop luar: mengatur baris (1 sampai N)
for (int i = 1; i < N; i++) {
// Loop dalam: cetak bintang sebanyak i
for (int j = 1; j <= 1; j++) {
}
printf("* ");
printf("\n"); // pindah ke baris baru
}
return 0;
}
