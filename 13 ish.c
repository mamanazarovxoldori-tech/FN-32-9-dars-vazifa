
#include <stdio.h>

int main() {

  int a;

  printf("Raqamni  kiriting: ");
   scanf("%d",&a);

   switch (a){
    case 1:
    printf("Osh");
   break;

   case 2:
   printf("Lag'mon");
   break;

  case 3:
   printf("Manti");
   break;

   case 4:
   printf("Sho'rva");
   break;

  case 5:
  printf("Somsa");
  break;

  default:
   
  printf("Noto'g'ri raqam");
   }

  return 0;
}