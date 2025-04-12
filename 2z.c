#include <stdio.h>

int main() {
   int blue_balls[5] = {2,2,2,2,2}; 
    int blue_count = sizeof(blue_balls) / sizeof(blue_balls[0]);
    printf("Количество синих шариков: %d\n", blue_count);
  return 0;
}
