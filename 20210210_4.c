/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void easylevelpassletters(int n) 
{   int i, d;
   
    	 
	printf("Easy level password"
		" (only letters): "); 
	for (i = 0; i < n; i) { 
		d = rand() % 123; 
		if ((d >= 65 && d <= 90) 
			|| d >= 97) { 
			printf("%c", (char)d); 
			i++; 
		} 
	} 


	
	printf("\n"); 
} 


int main(){ 
	int n = 6; 
   
    char choice='N';
    easylevelpassletters(n); 
	 printf("\nDo you like the password"
    " Press Y or y for yes and N or n for no: ");
    scanf("%c",&choice);
    switch(choice){
        case 'Y':
        
        break;
         case 'y':
       
        break;
        default:
        do{
	easylevelpassletters(n); 
	 printf("\nDo you like the password"
    " Press Y or y for yes and N or n for no: ");
    scanf("%c",&choice);
    }while(choice!='Y'||choice!='y');
    break;

    }
    
} 
