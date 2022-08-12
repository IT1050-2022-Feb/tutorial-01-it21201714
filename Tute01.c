/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

 float mark1, mark2,avg;

  printf("Enter Mark of Subject 1 :-");
  scanf("%f",&marks1);

  printf("Enter Mark of Subject 2 :-");
  scanf("%f",&marks2);

  avg=(marks1+marks2)/2;

  printf("Average marks for Subjects : - %.2f",avg);
  
  return 0;
}

