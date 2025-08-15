#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int indInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        printf("Insertion failed: array is at capacity.\n");
        return -1;
        
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
        
    }
    
    arr[index]=element;
    
    return 1;
}

int main(){
    int arr[100]={7,8,12,27,88};//sorted array
    int size=5;
    int element=45;
    int index =5;
    printf("Before insertion:\n");
    display(arr,size);
    printf("\n");
    // int result = 
    indInsertion(arr,size,element,100,index);
    
    // if(result == 1){
        size += 1;
        printf("insertion successful\n");
        printf("\nAfter insertion:\n");
        display(arr,size);
    // } else {
    //     printf("\nInsertion failed: array is at capacity.\n");
    // }
    printf("\n");
    return 0;
}