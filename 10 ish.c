#include <stdio.h>

int main() {
    int son, musbat = 0, manfiy = 0;

    while (scanf("%d", &son) && son != 0) {
        if (son > 0) musbat++;
        else manfiy++;
    }

    printf("Musbat: %d\nManfiy: %d\n", musbat, manfiy);
    return 0;
}