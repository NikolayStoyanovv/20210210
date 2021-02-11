/*Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.*/
#include <stdio.h>
#include <malloc.h>
 
int main()
{
	int i, n, sum = 0;
	int *a;
 
     	printf("Enter the size of array A \n");
	    scanf("%d", &n);
 
        a = (int *) malloc(n * sizeof(int));
 
        printf("Enter integer elements of the list \n");
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
 
        /*  Compute the sum of all elements in the given array */
 
        for (i = 0; i < n; i++)
        {if(i%2==0){
			sum = sum + *(a + i); 	
		}
		 
               /* this *(a+i) is used to access the value stored at the address*/
	}
 
        printf("Sum of all odd elements in array = %d\n", sum);
        return 0;
}