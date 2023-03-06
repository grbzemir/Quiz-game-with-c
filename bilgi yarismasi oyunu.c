#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    


void hosgeldiniz()
{
	system("color 0a");
    printf("Bilgi yarismasina Hosgeldiniz!\nlutfen kurallari okuyunuz...\n");
    printf("1- yarisma puan sistemlidir.\n");
    printf("2-yarismada kullancaginiz adi dogru sekilde giriniz:\n");
    printf("3- eger kayitli degilseniz lutfen kayit olunuz:\n");

}

int secim()
{
    int secim;
    printf("lutfen asagidaki seceneklerden birini seciniz:\n");
    printf("1-giris yapiniz:\n");
    printf("2-kayit olunuz:\n");
    scanf("%d",&secim);

    return secim;
}


int girisyap(char isim[20],char sifre[20])
{
    char alinanisim[20];
    char alinansifre[20];

    int kontrol;
    kontrol=0;
    while(kontrol==0)
{
    printf("lutfen isminizi giriniz:\n");
    scanf("%s",alinanisim);
    printf("lutfen sifrenizi giriniz:\n");
    scanf("%s",alinansifre);

    if(strcmp(isim,alinanisim)==0 && strcmp(sifre,alinansifre)==0)
{
    printf("sisteme giris basarili...\n");
    kontrol=1;
}
    else
{
    printf("yanlis isim veya sifre girdiniz...\n");
    printf("lutfen tekrar deneyiniz...\n");
}
}
}

int kayitol()
{
    char isim[20];
    char sifre[20];
    printf("lutfen bir isim giriniz:\n");
    scanf("%s",isim);
    printf("lutfen bir sifre giriniz:\n");
    scanf("%s",sifre);
    printf("kayıt basarili...\n");
    printf("giris ekranına yonlendiriliyorsunuz. Lutfen bekleyiniz...\n");
    girisyap(isim,sifre);

}
int bilgiyarismasi()
{
    char cevap[1];
    int puan;
    puan=0;
    printf("yarisma baslamistir bol sanslar...\n");
    printf("puaniniz: %d\n",puan);
    if(puan==0)
{
    printf("(soru-1)-> Asagidakilerden hangis Türkiye Cumhuriyetinin kurucusudur?\n");
    printf("a) Mustafa Kemal Atatürk\n");
    printf("b) Emircan Yılmaz\n");
    printf("c) Kemal Sunal\n");
    printf("d) Kemal Kılıcdaroglu\n");
    printf("cevabiniz: ");
    scanf("%s",cevap);
    if(strcmp(cevap,"a")==0)
{
    printf("cevabiniz dogrudur...\n");
    puan+=10;
    printf("puaniniz: %d\n",puan);
}
    else
{
    printf("cevabiniz yanlisdir...\n");
    printf("puaniniz: %d\n",puan);

}
}
if(puan==10)
{
    printf("(soru-2)->Asagidakilerden hangisi Türkiye Cumhuriyetinin Baskentidir?\n");
    printf("a) Ankara\n");
    printf("b) istanbul\n");
    printf("c) izmir\n");
    printf("d) Antalya\n");
    printf("cevabiniz: ");
    scanf("%s",cevap);
    if(strcmp(cevap,"a")==0)
{   
    printf("cevabiniz dogrudur...\n");
    puan+=10;
    printf("puaniniz: %d\n",puan);
}
    else
{
    printf("cevabiniz yanlisdir...\n");
    printf("puaniniz: %d\n",puan);

}
}
return puan;
}


int main ()
{
    char isim[20]="emircan";
    char sifre[20]="200322";


    hosgeldiniz();
    int secim1;
    secim1=secim();
    if(secim1==1)
{
    girisyap(isim,sifre);
}
else if(secim==2)
{
    kayitol();
}
 
   bilgiyarismasi();

return 0;
}

