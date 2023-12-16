#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct InputValues {
    float values[100];
    int angka;
};

typedef struct InputValues InputValues;

float penjumlahan(InputValues input) {
    float hasil = 0.0;
    for (int i = 0; i < input.angka; i++) {
        hasil += input.values[i];
    }
    return hasil;
}

float pengurangan(InputValues input) {
    float hasil = input.values[0];
    for (int i = 1; i < input.angka; i++) {
        hasil -= input.values[i];
    }
    return hasil;
}

float perkalian(InputValues input) {
    float hasil = 1.0;
    for (int i = 0; i < input.angka; i++) {
        hasil *= input.values[i];
    }
    return hasil;
}

float pembagian(InputValues input) {
    float hasil = input.values[0];
    for (int i = 1; i < input.angka; i++) {
        hasil /= input.values[i];
    }
    return hasil;
}

float modulus(float a, float b) {
    return fmodf(a, b);
}

float persen(float angka, float persentase) {
    return (angka * persentase) / 100.0;
}

float sinus(float a) {
    return (sin(a * (3.14159 / 180.0)));
}

float cosinus(float a) {
    return (cos(a * (3.14159 / 180.0)));
}

float tangen(float a) {
    return (tan(a * (3.14159 / 180.0)));
}

float secant(float a) {
    return (1 / cos(a * (3.14159 / 180.0)));
}

float cosecant(float a) {
    return (1 / sin(a * (3.14159 / 180.0)));
}

float cotangent(float a) {
    return (1 / tan(a * (3.14159 / 180.0)));
}

float logaritma(float a) {
    return (log10(a));
}

float pangkat(float a, float b) {
    return pow(a, b);
}

float celcius_ke_fahrenheit(float c) {
    return ((c * 9.0 / 5.0) + 32);
}

float fahrenheit_ke_celcius(float f) {
    return ((f - 32) * 5.0 / 9.0);
}

float reamur_ke_celcius(float r) {
    return (r * 5.0 / 4.0);
}

float celcius_ke_reamur(float c) {
    return (c * 4.0 / 5.0);
}

float reamur_ke_fahrenheit(float r) {
    float c = reamur_ke_celcius(r);
    return celcius_ke_fahrenheit(c);
}

float fahrenheit_ke_reamur(float f) {
    float c = fahrenheit_ke_celcius(f);
    return celcius_ke_reamur(c);
}

void faktorial ()
{
    int n;
    int faktorial = 1;

    printf("Masukkan Angka: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Tidak memiliki faktorial"); } 
        else {for (int i = 1; i <= n; ++i) {
             faktorial *= i; }
             printf("Hasil faktorial: ");
                printf("%d", faktorial); 
                }
}  

float akar(float a) {
    return sqrt(a);
}

float pembulatan_ke_bawah(float a) {
    return floor(a);
}

float pembulatan_ke_atas(float a) {
    return ceil(a);
}

int main(){
    int pilihan;
    float hasil;
    InputValues input;

    printf("Menu pilihan kalkulator\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Modulus\n");
    printf("6. Persen\n");
    printf("7. Trigonometri\n");
    printf("8. Logaritma\n");
    printf("9. Pangkat\n");
    printf("10. Konversi Suhu\n");
    printf("11. Faktorial\n");
    printf("12. Akar\n");
    printf("13. Pembulatan\n");
    
    printf("Pilih salah satu menu di atas: ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1: {
            printf("Masukkan jumlah angka: ");
            scanf("%d", &input.angka);

             printf("Masukkan angka-angka tersebut:\n");
             for (int i = 0; i < input.angka; i++) {
             printf("Angka ke-%d: ", i + 1);
             scanf("%f", &input.values[i]);
             }
            hasil = penjumlahan(input);
            printf("Hasil = %.2f\n", hasil);
            break;
        }
        case 2: {
            printf("Masukkan jumlah angka: ");
            scanf("%d", &input.angka);
            printf("Masukkan angka-angka tersebut:\n");
            for (int i = 0; i < input.angka; i++) {
            printf("Angka ke-%d: ", i + 1);
            scanf("%f", &input.values[i]);
            }
            hasil = pengurangan(input);
            printf("Hasil = %.2f\n", hasil);
            break;
        }
        case 3: {
            printf("Masukkan jumlah angka: ");
            scanf("%d", &input.angka);
            printf("Masukkan angka-angka tersebut:\n");
            for (int i = 0; i < input.angka; i++) {
            printf("Angka ke-%d: ", i + 1);
            scanf("%f", &input.values[i]);
            }
            hasil = perkalian(input);
            printf("Hasil = %.2f\n", hasil);
            break;
        }
        case 4: {
            printf("Masukkan jumlah angka: ");
            scanf("%d", &input.angka);
            printf("Masukkan angka-angka tersebut:\n");
            for (int i = 0; i < input.angka; i++) {
            printf("Angka ke-%d: ", i + 1);
            scanf("%f", &input.values[i]);
            }
            hasil = pembagian(input);
            printf("Hasil = %.2f\n", hasil);
            break;
        }
        case 5: {
            float a, b;
            printf("Nilai pertama = ");
            scanf("%f", &a);
            printf("Nilai kedua = ");
            scanf("%f", &b);
            printf("Hasil = %.2f\n", modulus(a, b));
            break;
        }
        case 6: {
          float angka, persentase;
            printf("Masukkan angka: ");
            scanf("%f", &angka);
            printf("Masukkan persentase: ");
            scanf("%f", &persentase);
            hasil = persen(angka, persentase);
            printf("%.2f persen dari %.2f adalah %.2f\n", persentase, angka, hasil);
            break;
        }
        case 7: {
            int pilihan;
            float a;

            printf("Pilih fungsi trigonometri:\n");
            printf("1. Sinus\n");
            printf("2. Cosinus\n");
            printf("3. Tangen\n");
            printf("4. Sec\n");
            printf("5. Csc\n");
            printf("6. Cot\n");
            printf("Pilihan Anda: ");
            scanf("%d", &pilihan);
    
            printf("Masukkan nilai sudut (derajat) = ");
            scanf("%f", &a);
    
             switch (pilihan) {
            case 1:
                printf("Hasil Sinus = %.2f\n", sinus(a));
                break;
            case 2:
                printf("Hasil Cosinus = %.2f\n", cosinus(a));
                break;
            case 3:
                printf("Hasil Tangen = %.2f\n", tangen(a));
                break;
            case 4:
                printf("Hasil Sec = %.2f\n", secant(a));
                break;
            case 5:
                printf("Hasil Csc = %.2f\n", cosecant(a));
                break;
            case 6:
                printf("Hasil Cot = %.2f\n", cotangent(a));
                break;

            default:
            printf("Pilihan tidak valid.\n");
            break;
            }
             break;
        }       
        case 8: {
            float a;
            printf("Nilai = ");
            scanf("%f", &a);
            printf("Hasil = %.2f\n", logaritma(a));
            break;
        }
        case 9: {
            float a, b;
            printf("Nilai pertama = ");
            scanf("%f", &a);
            printf("Nilai pangkat = ");
            scanf("%f", &b);
            printf("Hasil = %.2f\n", pangkat(a, b));
            break;
        }
        case 10: {
            int pilihan;
             printf("Menu Konversi Suhu\n");
             printf("1. Celcius ke Fahrenheit\n");
             printf("2. Fahrenheit ke Celcius\n");
             printf("3. Reamur ke Celcius\n");
             printf("4. Celcius ke Reamur\n");
             printf("5. Reamur ke Fahrenheit\n");
             printf("6. Fahrenheit ke Reamur\n");
             printf("Pilih menu: ");
             scanf("%d", &pilihan);

            switch (pilihan) {
            case 1: {
            float c;
            printf("Nilai Celcius = ");
            scanf("%f", &c);
            printf("Hasil = %.2f\n", celcius_ke_fahrenheit(c));
            break;
            }
            case 2: {
            float f;
            printf("Nilai Fahrenheit = ");
            scanf("%f", &f);
            printf("Hasil = %.2f\n", fahrenheit_ke_celcius(f));
            break;
            }
            case 3: {
            float r;
            printf("Nilai Reamur = ");
            scanf("%f", &r);
            printf("Hasil = %.2f\n", reamur_ke_celcius(r));
            break;
            }
            case 4: {
            float c;
            printf("Nilai Celcius = ");
            scanf("%f", &c);
            printf("Hasil = %.2f\n", celcius_ke_reamur(c));
            break;
            }
            case 5: {
            float r;
            printf("Nilai Reamur = ");
            scanf("%f", &r);
            printf("Hasil = %.2f\n", reamur_ke_fahrenheit(r));
            break;
            }
            case 6: {
            float f;
            printf("Nilai Fahrenheit = ");
            scanf("%f", &f);
            printf("Hasil = %.2f\n", fahrenheit_ke_reamur(f));
            break;
            }
            
            default:
            printf("Menu yang Anda pilih tidak valid.\n");
            break;
            }
            return 0;
        }
        case 11: {
            faktorial();
            break;
        }    
        case 12: {
        float a;
        printf("Nilai = ");
        scanf("%f", &a);
        printf("Hasil = %.2f\n", akar(a));
        break;
        }
        case 13: {
           int pilihan;
           float a;
             printf("Pilih Menu Pembulatan\n");
             printf("1. Pembulatan ke bawah (Floor)\n");
             printf("2. Pembulatan ke atas (Celling)\n"); 
             printf("Pilih menu: ");
             scanf("%d", &pilihan);

             printf("Masukkan nilai = ");
             scanf("%f", &a);

            switch (pilihan) {
            case 1:
                printf("Hasil Pembulatan ke bawah (Floor) = %.2f\n", floor(a));
                break;
            case 2: 
                printf("Hasil Pembulatan ke atas (Celling) = %.2f\n", ceil(a));
                break;

            default:
            printf("Pilihan tidak valid.\n");
            break;
            }
            return 0;
        }
              
    default:
    printf("Pilihan tidak valid.\n");
    break;
    }  

    printf("\n");
    system("pause");
    return 0;
}