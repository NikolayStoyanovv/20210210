/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.*/
#include <stdio.h> 
#include <string.h> 
  
 
void isPalindrome(char str[]) 
{ 
    
    int l = 0; 
    int h = strlen(str) - 1; 
  
  
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("\n%s: is Not Palindrome\n", str); 
            return; 
        } 
    } 
    printf("\n%s: is palindrome\n", str); 
} 
  

int main() 
{ 
    isPalindrome("abba"); 
    
    return 0; 
}