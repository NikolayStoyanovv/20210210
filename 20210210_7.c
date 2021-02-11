/*Задача 7. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/
#include<stdio.h>
long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %ld numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input a number to search\n");
   scanf("%ld", &search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%ld isn't present in the array.\n", search);
   else
      printf("%ld is present at location %ld.\n", search, position+1);
 
   return 0;
}
long linear_search(long *p, long n, long find) {
  long c;
 
  for (c = 0; c < n; c++) {
    if (*(p+c) == find)
      return c;
  }
 
  return -1;
}
