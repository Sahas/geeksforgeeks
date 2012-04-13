#include<stdio.h>
#include<string.h>

void anagram(char* first,char* second){
  
  
}
void main(){

char *first,*second;
printf("Enter the first,second strings\n");
scanf("%s",first);
scanf("%s",second);
if(strlen(first)!=strlen(second))
printf("Not Anagrams");
else
anagram(first,second);
}
