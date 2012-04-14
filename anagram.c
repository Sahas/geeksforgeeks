#include<stdio.h>
#include<string.h>
enum Boolean{false=0,true=1};
typedef enum Boolean boolean;

void trim(char* str){
    int i,j;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(j=i;str[j]!='\0';j++)
            str[j]=str[j+1];
        }
    }
}

void sort(char* str){
    
}

boolean isAnagram(char* first,char* second){
    trim(first);
    trim(second);
    if(strlen(first)!=strlen(second))
        printf("Not Anagrams");
    sort(first);
    sort(second);
    if(strcmp(first,second)){
    return false;
    }
    else
    return true;
}
void main(){

char *first,*second;
printf("Enter the first,second strings\n");
scanf("%s",first);
scanf("%s",second);
if(isAnagram(first,second))
printf("Anagrams");
else
printf("Not Anagrams");
}
