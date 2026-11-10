
#include <stdio.h>

int main() {

  int a;

  printf("Raqamni  kiriting: ");
   scanf("%d",&a);

   switch (a){
    case 1:
    printf("Bahor");
   break;

   case 2:
   printf("Yoz");
   break;

  case 3:
   printf("Kuz");
   break;

   case 4:
   printf("Qish");
   break;

  default:
   
  printf("Noto'g'ri raqam");
   }

  return 0;
}