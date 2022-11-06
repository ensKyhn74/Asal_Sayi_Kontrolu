#include <stdio.h>
// klavyeden girilen sayı asal mı değil mi?
// asal sayı: sadece kendisine ve 1'e tam bölünür.
// 2,3,5,7,11,13,17,19,23,29,...

int main() 

{
 
  int i;
  int sayi;
  int AsalSorgu = 1;  // sanki asalmış gibi kabul et
  
  printf("sayi girin: ");
  scanf("%d",&sayi);
  
  if(sayi >= 2)
  {
   for(i = 2 ; i < sayi ; i++)
   {
    if(sayi % i == 0) // sayı i'lerden bir tanesine bile bölünürse döngüyü kır,diğer i'leri kontrol etmeye gerek yok!
    {
      AsalSorgu = 0;
      break;
    }
   }
  
   if(AsalSorgu == 1) // asal ise
   {
     printf("%d asal sayidir.",sayi);
   }
   
   else // asal değil ise
   {
     printf("%d asal sayi degildir.",sayi);
   }      
  }
  
  else // 2'den küçük girildi ise
  {
   printf("%d asal sayi degildir",sayi);      
  }

  return 0;

}