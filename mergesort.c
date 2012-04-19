#include<stdio.h>

void merge(int* array,int low,int mid,int high){
    int length=high-low+1;
    int length1=mid-low+1;
    int length2=high-mid;
    int temp_array1[length1],temp_array2[length2];
    int i,j,k;
    k=low;
    for(j=0;j<length2;j++){
        for(i=0;i<length1;i++){
            if(temp_array2[j]<temp_array1[i]){
              array[k]=temp_array2[j];
              k++;
              break;
            }
            else{
                array[k]=temp_array1[i];
                k++;
            }
        }
        
    }
    if(k<low+length-1 && i>length1){
        for(;j<length2;j++){
            array[k]=temp_array2[j];
            k++;
        }
    }
    else if(k<low+length-1 && j>length2){
        for(;)
    }
   /* for(j=mid+1;j<=high;j++){
        for(;i<=mid;k<low+le++){
            if(array[j]<array[i]){
                temp_array[k]=array[j];
                k++;
                break;
            }
            else{
                temp_array[k]=array[i];
                k++;
            }
        }
    
    if(i>mid && k<=length){
        temp_array[k]=array[j];
        k++;
    }
    
    }
    if(j>high && k<=length){
        for(i=len;k<=length;k++)
        temp_array[k]=array[i];
    }
    */
}


void mergesort(int* array,int low,int high){
    int mid;
    mid=(low+high)/2;
    if(low!=high){
    mergesort(array,low,mid);
    mergesort(array,mid+1,high);
    merge(array,low,mid,high);
    }
}

