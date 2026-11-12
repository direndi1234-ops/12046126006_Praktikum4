/*
*program : system login dengan batas percobaan
*nama :rafi zaini arrasyid
*nim:12046126006
*dekripsi :-
*/


#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    int password;
    int percobaan = 0;
    int berhasil = 0;

    while (percobaan < 3) {
        printf("Username: ");
        scanf("%49s", username);
        printf("Password: ");
        scanf("%d", &password);

        percobaan++;

        if (strcmp(username, "BTH321") == 0 && password == 1511123) {
            printf("Login Berhasil\n");
            berhasil = 1;
            break;
        } else {
            printf("Username atau password salah! Sisa percobaan: %d\n", 3 - percobaan);
        }
    }

    if (berhasil == 0) {
        printf("Akun terkunci! Hubungi admin.\n");
    }

    return 0;
}
