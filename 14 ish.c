
#include <stdio.h>

int main() {

  int a;
  float sum;
  
  printf("Tanlang: ");
  scanf("%d",&a);

  printf("Summani kiriting: ");
   scanf("%f",&sum);

   switch (a){
    case 1:
    printf("Dollar: %.2f",sum / 12500);
   break;

   case 2:
   printf("Yevro: %.2f", sum / 13500);
   break;

  case 3:
   printf("Rubl: %.2f",sum /140);
   break;

  default:
   
  printf("Xato raqam");
   }

  return 0;
}