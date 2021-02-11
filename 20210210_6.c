/*Задача 6. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.*/
#include<stdio.h>
#include<string.h>
void sort ( int a[], int n){
int i, j, *temp=NULL;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp =&a[i];
a[i] =a[j];
a[j] =*temp;
}
}
int main(){
    int arr[]={1,2,3,5,1,4,2,3,4,4};
    sort(arr,10);
    for(int i=0;arr[i]!='\0';i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}