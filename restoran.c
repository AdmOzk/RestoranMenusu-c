#include <stdio.h>
#include <stdlib.h>
int menu();
int baslangiclar();
int kahvalti();
int salata();
int et();
int tavuk();
int burger();
int pizza_pide();
int makarna();
int tatli();
int icecek();
int hesap = 0;
void exit(int stauts);
int main()
{

    int choice_1;
    printf("********");
    printf(" Adem Restoran ");
    printf("*******\n");
    printf("\n\nHosgeldiniz !\n\n");
    printf("1. Menu \n");
    printf("2. Cikis");
    printf("\n\nlutfen yapmak istediginiz islemin numarasini giriniz :");
    scanf("%d",&choice_1);
       while(choice_1 > 2 || choice_1 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen yapmak istediginiz islemin numarasini giriniz :");
 scanf("%d",&choice_1);
    }

      if(choice_1==1)
    {
        menu();
    }
     else if(choice_1 == 2)
   {
    printf("Birdaha gorusmek uzere\n");
    printf("********");
    printf(" Adem Restoran ");
    printf("*******\n");
    exit(0);
   }

    return 0;
}

int menu()
{

 int choice_2;
 printf("\n\n Menuye hosgeldiniz \n\n");
 printf("1. Baslangiclar\n\n");
 printf("2. Kahvalti\n\n");
 printf("3. Salata\n\n");
 printf("4. Et\n\n");
 printf("5. Tavuk\n\n");
 printf("6. Burger\n\n");
 printf("7. Pizza / Pide\n\n");
 printf("8. Makarna\n\n");
 printf("9. Tatli\n\n");
 printf("10. Icecekler\n\n");
 printf("11. Cikis\n\n");
 printf("12. Hesabi yazdir.\n\n");
 printf("Lutfen gitmek istediginiz kategorinin numarasini giriniz : ");
 scanf("%d",&choice_2);
  while(choice_2 > 12 || choice_2 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("Lutfen gitmek istediginiz kategorinin numarasini giriniz : ");
 scanf("%d",&choice_2);

  }
 if (choice_2 == 1)
 {
     printf("Baslangiclara gidiliyor...\n\n");
     baslangiclar();
 }
   if (choice_2 == 2)
 {
     printf("Kahvaltiliklara gidiliyor...\n\n");
     kahvalti();
 }
   if (choice_2 == 3)
 {
     printf("Salataya gidiliyor...\n\n");
     salata();
 }
 if (choice_2 == 4)
 {
     printf("Etlere gidiliyor...\n\n");
     et();
 }
  if (choice_2 == 5)
 {
     printf("Tavuklara gidiliyor...\n\n");
     tavuk();
 }
  if (choice_2 == 6)
 {
     printf("Burglere gidiliyor...\n\n");
     burger();
 }
  if (choice_2 == 7)
 {
     printf("Pizza / Pidelere gidiliyor...\n\n");
     pizza_pide();
 }
  if (choice_2 == 8)
 {
     printf("Makaranlara gidiliyor...\n\n");
     makarna();
 }
  if (choice_2 == 9)
 {
     printf("Tatlilara gidiliyor...\n\n");
     tatli();
 }
  if (choice_2 == 10)
 {
     printf("Iceceklere gidiliyor...\n\n");
     icecek();
 }
  if (choice_2 == 11)
 {
     printf("Birdaha gorusmek uzere...\n\n");
     exit(0);
 }
if (choice_2==12)
{
    printf("Hesap = %d TL Birdaha bekleriz...\n\n",hesap);
    printf("********");
    printf(" Adem Restoran ");
    printf("*******\n");

}
}
int baslangiclar()
{

 int choice_3;
 printf("1. Corba 12 TL\n\n");
 printf("2. Karisik meze tabagi 30 TL\n\n");
 printf("3. Combo Tabagi 26 TL\n\n");
 printf("4.Dolma Tabagi 18 TL\n\n");
 printf("5. Menuye donus\n\n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_3);
 while(choice_3 > 5 || choice_3 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_3);
    }
  if(choice_3==1)
  {
      printf("Corba siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=12;
      menu();
  }
    if(choice_3==2)
  {
      printf("Karisik meze tabagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_3==3)
  {
      printf("Combo tabagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=26;
      menu();
  }
    if(choice_3==4)
  {
      printf("Dolma tabagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=18;

      menu();
  }
    if(choice_3==5)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }
}

int kahvalti()
{

 int choice_4;
 printf("1. Serpme Kahvalti 70 TL\n\n");
 printf("2. Kahvalti tabagi 40 TL\n\n ");
 printf("3. Omlet 21 TL\n\n");
 printf("4.Tost 18 TL\n\n");
 printf("5. Menu icin");
printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
scanf("%d",&choice_4);
while(choice_4 > 5 || choice_4 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_4);
    }
  if(choice_4==1)
  {
      printf("Serpme kahvalti siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=70;

      menu();
  }
    if(choice_4==2)
  {
      printf("Kahvalti tabagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=40;

      menu();
  }
    if(choice_4==3)
  {
      printf("Omlet siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=21;

      menu();
  }
    if(choice_4==4)
  {
      printf("Dolma tabagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=18;
      menu();
  }
    if(choice_4==5)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }

}

int salata()
{
int choice_5;
 printf("1. Gevur dagi 25 TL\n\n");
 printf("2. Akdeniz salatasi 28 TL\n\n ");
 printf("3. Roka salatasi 26 TL\n\n");
 printf("4. Etli salata 32 TL\n\n");
 printf("5. Menu icin");
printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
scanf("%d",&choice_5);
while(choice_5 > 5 || choice_5 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_5);
    }
  if(choice_5==1)
  {
      printf("Gevur dagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=25;
      menu();
  }
    if(choice_5==2)
  {
      printf("Akdeniz salatasi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=28;
      menu();
  }
    if(choice_5==3)
  {
      printf("Roka salatasi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=26;
      menu();
  }
    if(choice_5==4)
  {
      printf("Etli salata siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=32;
      menu();
  }
    if(choice_5==5)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }
}

int et()
{
int choice_6;
 printf("1. Urfa kebap 30 TL\n\n");
 printf("2. Adana kebap 30 TL\n\n");
 printf("3. Iskender 40 TL\n\n");
 printf("4. Bonfile 75 TL\n\n");
 printf("5. Karisik izgara 34 TL\n\n");
 printf("6. Kofte 28 TL\n\n ");
 printf("7. Pilav ustu doner 29 TL\n\n");
 printf("8. Pirzola 50 TL\n\n");
 printf("9. Menu icin");
printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
scanf("%d",&choice_6);
while(choice_6 > 9 || choice_6 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_6);
    }
  if(choice_6==1)
  {
      printf("Urfa kebap siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_6==2)
  {
      printf("Adana kebap siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_6==3)
  {
      printf("Iskender siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=40;
      menu();
  }
    if(choice_6==4)
  {
      printf("Bonfile siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=75;
      menu();
  }
    if(choice_6==5)
  {
      printf("Karisik izgara siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=34;
      menu();
  }
  if(choice_6==6)
  {
      printf("Kofte siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=28;

      menu();
  }
    if(choice_6==7)
  {
    printf("Pilav ustu doner siparisiniz alindi menuye donuluyor...\n\n");
    hesap +=29;

      menu();
  }
    if(choice_6==8)
  {
      printf("Pirzola siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=50;

      menu();
  }
    if(choice_6==9)
  {
        printf("menuye donuluyor...\n\n");

      menu();
  }

}

int tavuk()
{
int choice_7;
 printf("1. Kori soslu tavuk 32 TL\n\n");
 printf("2. Pilav ustu tavuk doner 25 TL\n\n ");
 printf("3. Snitzel 28 TL\n\n");
 printf("4. izgara tavuk 41 TL\n\n");
 printf("5. Menu icin");
printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
scanf("%d",&choice_7);
while(choice_7 > 5 || choice_7 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_7);
    }
  if(choice_7==1)
  {
      printf("Kori soslu tavuk siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=32;

      menu();
  }
    if(choice_7==2)
  {
      printf("Pilav ustu tavuk doner siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=25;

      menu();
  }
    if(choice_7==3)
  {
      printf("Snitzel siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=28;

      menu();
  }
    if(choice_7==4)
  {
      printf("izgara tavuk siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=41;

      menu();
  }
   if(choice_7==5)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }
}

int burger()
{
int choice_8;
 printf("1. Cheese Burger 35 TL\n\n");
 printf("2. Tavuk Burger 30 TL\n\n ");
 printf("3. Dana Burger 40 TL\n\n");
 printf("4. 3lu Mini Burger 33 TL\n\n");
 printf("5. Menu icin");
printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
scanf("%d",&choice_8);
while(choice_8 > 5 || choice_8 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_8);
    }
  if(choice_8==1)
  {
      printf("Cheese Burger siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=35;
      menu();
  }
    if(choice_8==2)
  {
      printf("Tavuk Burger siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_8==3)
  {
      printf("Dana burger siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=40;
      menu();
  }
    if(choice_8==4)
  {
      printf("3lu Mini Burger siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=33;
      menu();
  }
   if(choice_8==5)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }
}

int pizza_pide()
{
int choice_9;
 printf("1. Karisik pizza 40 TL\n\n");
 printf("2. Margaritta pizza 38 TL\n\n ");
 printf("3. Pepperoni pizza 42 TL\n\n");
 printf("4. Karisik pide 40 TL\n\n");
 printf("5. Kusbasili pide 42 TL\n\n ");
 printf("6. Kasarli pide 38 TL\n\n");
 printf("7. Menu icin");
printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
scanf("%d",&choice_9);
while(choice_9 > 7 || choice_9 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_9);
    }
  if(choice_9==1)
  {
      printf("Karisik pizza siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=40;
      menu();
  }
    if(choice_9==2)
  {
      printf("Margaritta pizza siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=38;
      menu();
  }
    if(choice_9==3)
  {
      printf("Pepperoni pizza siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=42;
      menu();
  }
    if(choice_9==4)
  {
      printf("Karisik pizza siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=40;
      menu();
  }
    if(choice_9==5)
  {
      printf("Kusbasili pide siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=42;
      menu();
  }
    if(choice_9==6)
  {
      printf("Kasarli pide siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=38;
      menu();
  }
   if(choice_9==7)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }
}

int makarna()
{
int choice_10;
 printf("1. Fetuccini makarna 30 TL\n\n");
 printf("2. Bolonez makarna 31 TL\n\n ");
 printf("3. Domatesli ve mantarli makarna 30 TL\n\n");
 printf("4. Spagetti 29 TL\n\n");
 printf("5. Menu icin");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_10);
while(choice_10 > 5 || choice_10 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_10);
    }
  if(choice_10==1)
  {
      printf("Fetuccini makarna siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_10==2)
  {
      printf("Bolonez makarna siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=31;
      menu();
  }
    if(choice_10==3)
  {
      printf("Domtesli ve mantarli makarna siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_10==4)
  {
      printf("Spagetti siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=29;
      menu();
  }
    if(choice_10==5)
  {
      printf("menuye donuluyor...\n\n");
      menu();
  }
}

int tatli()
{
int choice_11;
 printf("1. Cheesecake 24 TL\n\n");
 printf("2. Brownie 30 TL\n\n ");
 printf("3. Magnolya 26 TL\n\n");
 printf("4. Frambuazli Trilice 25 TL\n\n");
 printf("5. Karamelli Trilice 25 TL\n\n");
 printf("6. Baklva tabagi 36 TL\n\n ");
 printf("7. Havuc dilim baklava 38 TL\n\n");
 printf("8. Kizarmis Dondurma 30 TL\n\n");
 printf("9. Menu icin");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_11);
while(choice_11 > 9 || choice_11 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_11);
    }
  if(choice_11==1)
  {
      printf("Cheescake siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=24;
      menu();
  }
    if(choice_11==2)
  {
      printf("Brownie siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
    if(choice_11==3)
  {
      printf("Magnolya siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=26;
      menu();
  }
    if(choice_11==4)
  {
      printf("Frambuazli trilice siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=25;
      menu();
  }
   if(choice_11==5)
  {
      printf("Karamelli Trilice siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=25;
      menu();
  }
   if(choice_11==6)
  {
      printf("Baklava tabagi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=36;
      menu();
  }
   if(choice_11==7)
  {
      printf("Havuc dilim baklava siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=38;
      menu();
  }
    if(choice_11==8)
  {
      printf("Kizarmis donruma siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=30;
      menu();
  }
  if(choice_11==9)
  {
      printf("Menuye donuluyor...\n\n");
      menu();
  }
}

int icecek()
{
int choice_12;
printf("1. Su 8 TL\n\n");
 printf("2. ice tea 12 TL\n\n ");
 printf("3. Coca cola 12 TL\n\n");
 printf("4. Fanta  12 TL\n\n");
 printf("5. Cay 6 TL\n\n");
 printf("6. Turk kahvesi 15 TL\n\n ");
 printf("7. ice chocolate mocha 25 TL\n\n");
 printf("8. Latte 25 TL\n\n");
 printf("9. Menu icin");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_12);
while(choice_12 > 9 || choice_12 < 1 )
    {
 printf("Yanlis girdiniz tekrar deneyiniz \n");
 printf("\n\nlutfen siparis etmek istediginiz urunun numarasini giriniz :");
 scanf("%d",&choice_12);
    }
  if(choice_12==1)
  {
      printf("Su siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=8;
      menu();
  }
    if(choice_12==2)
  {
      printf("ice tea siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=12;
      menu();
  }
    if(choice_12==3)
  {
      printf("Coca cola siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=12;
      menu();
  }
    if(choice_12==4)
  {
      printf("Fanta siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=12;

      menu();
  }
   if(choice_12==5)
  {
      printf("Cay siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=6;
      menu();
  }
   if(choice_12==6)
  {
      printf("Turk kahvesi siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=15;
      menu();
  }
   if(choice_12==7)
  {
      printf("ice chocolate mocha siparisiniz alindi menuye donuluyor...\n\n");
      hesap +=25;
      menu();
  }
    if(choice_12==8)
  {
       printf("Latte siparisiniz alindi menuye donuluyor...\n\n");
       hesap +=25;
      menu();
  }
  if(choice_12==9)
  {
      printf("Menuye donuluyor...\n\n");
      menu();
  }

}
