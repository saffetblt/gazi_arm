#include <stdio.h>
float sayi1, sayi2, sonuc;
char islem;

float toplam()
{
    sonuc =sayi1+sayi2;
    return(sonuc);
}

float cikarma()
{
    sonuc =sayi1-sayi2;
    return(sonuc);
}

float bolme()
{
    sonuc =sayi1/sayi2;
    return(sonuc);
}

float carpma()
{
    sonuc =sayi1*sayi2;
    return(sonuc);
}

int main(void)
{

    printf("İlk sayıyı giriniz\n");
    scanf("%f",&sayi1);
    printf("İslem seciniz: toplama(+) veya t/T, cıkarma(-) veya c/C, bolme(/) veya b/B, carpma(*) veya r/R\n");
    scanf("%s",&islem);
    printf("İşleminiz= %c \n",islem);
    printf("İkinci sayıyı giriniz\n");
    scanf("%f",&sayi2);
    switch(islem)
    {


    case '+' :
        printf("sonuc= %.2f",toplam()); break;
    case 't' :
        printf("sonuc= %.2f",toplam()); break;
    case 'T' :
        printf("sonuc= %.2f",toplam()); break;


    case '-' :
        printf("sonuc= %.2f",cikarma()); break;
    case 'c' :
        printf("sonuc= %.2f",cikarma()); break;
    case 'C' :
        printf("sonuc= %.2f",cikarma()); break;

    case '/' :
        printf("sonuc= %.2f",bolme()); break;
    case 'b' :
        printf("sonuc= %.2f",bolme()); break;
    case 'B' :
        printf("sonuc= %.2f",bolme()); break;


    case '*' :
        printf("sonuc= %.2f",carpma()); break;
    case 'r' :
        printf("sonuc= %.2f",carpma()); break;
    case 'R' :
        printf("sonuc= %.2f",carpma()); break;



    }



    return 0;
}

