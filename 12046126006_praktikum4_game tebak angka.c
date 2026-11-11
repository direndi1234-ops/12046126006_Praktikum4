/*
*program :game tebak angka
*nama :rafi zaini arrasyid
*nim:12046126006
*dekripsi :while loop untuk game tebak angka petunjuk
*/


#include <stdio.h>
int main() {
    const int ANGKA_RAHASIA = 73;
    int tebakan = 0;
    int jumlah_coba = 0;
    printf("== GAME TEBAK ANGKA =\n");
    printf("Saya punya angka rahasia antara 1-100.\n");
    printf("Coba tebak!\n\n");
    
 while (tebakan != ANGKA_RAHASIA) {
    printf("Masukkan tebakan Anda: ");
    scanf("%d", &tebakan);
    jumlah_coba++;
   
    if (tebakan < ANGKA_RAHASIA) {
        printf("Tebakan terlalu KECIL! Coba lagi.\n\n");
    } else if (tebakan > ANGKA_RAHASIA) {
        printf("Tebakan terlalu BESAR! Coba lagi.\n\n"); 
    } else {
        printf("\n*** SELAMAT! Anda benar! ***\n");
        printf("Angka rahasianya adalah: %d\n", ANGKA_RAHASIA);
        }
    }
    printf("\nAnda menebak sebanyak %d kali.\n", jumlah_coba);
    printf("Terima kasih sudah bermain!\n");
    
return 0;
}
