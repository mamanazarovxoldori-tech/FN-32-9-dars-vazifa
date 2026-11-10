#include <stdio.h>

int main() {
  
int Id;

  while (1){
  printf("Parolni kiriting:");
  scanf("%d",&Id);
  if(Id==12345){

    printf("Xush kelibsiz");
    break;
    }else{
    printf("Parol noto'g'ri\n");
    }
}
  return 0;
}