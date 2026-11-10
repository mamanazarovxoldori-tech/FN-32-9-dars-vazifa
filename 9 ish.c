#include <stdio.h>

int main() {
  
int pul,jami=0;

while(jami < 100000) {

  printf("Pul kiriting: ");
  scanf("%d",&pul);

 jami +=pul;
}
printf("%d",jami);

  return 0;
}