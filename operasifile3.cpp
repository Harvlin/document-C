#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {    
    int kar, i = 0; // Mengubah tipe data kar menjadi int untuk menyimpan EOF
    FILE *dt;
    dt = fopen("text.txt", "r");
    if (dt != NULL) {
        while ((kar = fgetc(dt)) != EOF) { // Memberi tanda kurung untuk memastikan operasi perbandingan berjalan dengan benar
            printf("%c", kar); // Menggunakan %c untuk menampilkan karakter
            i++;
        }
        fclose(dt); // Menutup file setelah digunakan
    } else {
        printf("File tidak dapat dibuka.\n");
        exit(1);
    }
    return 0;
}
