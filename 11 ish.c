
#include <stdio.h>

int main() {

  int a;

  printf("Raqamni  kiriting: ");
   scanf("%d",&a);

   switch (a){
    case 1:
    printf("Avtomobil\n");
   break;

   case 2:
   printf("Avtobuz");
   break;

  case 3:
   printf("Poyezd");
   break;

   case 4:
   printf("Samalyod");
   break;

  default:
   
  printf("Noto'g'ri raqam");
   }
   
  return 0;
}