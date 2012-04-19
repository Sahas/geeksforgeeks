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

void sort(char* str,int length){
  int i,j,k;
  char temp;
  for(i=1;i<length;i++){
      for(j=0;j<i;j++){
          if(str[i]<str[j]){
              temp=str[i];
              for(k=i;k>j;k--){
                  str[k]=str[k-1];
              }
              str[j]=temp;
              break;
          }
      }
  }
}

boolean isAnagram(char* first,char* second){
    int len1,len2;
    trim(first);
    len1=strlen(first);
    trim(second);
    len2=strlen(second);
    if(len1!=len2)
        printf("Not Anagrams");
    sort(first,len1);
    sort(second,len2);
    if(strcmp(first,second)){
    return false;
    }
    else
    return true;
}

void main(){

    char first[]="christian";
	char second[]="rich saint";
	

//printf("Enter the first,second strings/n");
//scanf("%s",first);
//scanf("%s",second);

if(isAnagram(first,second))
printf("Anagrams");
else
printf("Not Anagrams");
}
