#include <stdio.h>

int main() {
   int colorful_balls[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}; 
  int colorful_count = sizeof(colorful_balls) / sizeof(colorful_balls[0]);
  printf("Количество разноцветных шариков: %d\n", colorful_count);
  return 0;
}
