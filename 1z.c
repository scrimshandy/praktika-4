#include <stdio.h>

int main() {
int red_balls[10] = {1,1,1,1,1,1,1,1,1,1}; 
    int red_count = sizeof(red_balls) / sizeof(red_balls[0]);
    printf("Количество красных шариков: %d\n", red_count);
  return 0;
}
