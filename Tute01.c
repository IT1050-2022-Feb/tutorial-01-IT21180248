/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg;
  
  printf("input mark1 =");
  scanf("%d", &mark1);

  printf("input mark2 =");
  scanf("%d",&mark2);

  avg=(mark1+mark2)/2;
  
  printf("avarage is : %.2f",avg);

  
  return 0;
}

