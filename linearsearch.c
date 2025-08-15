#include<stdio.h>

int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    printf("element not found\n");
    return -1;
}


int main(){

    int arr[]={2,5,3,6,8,69,96};
    int size= sizeof(arr)/sizeof(int);
    int element = 69;
    int searchIndex = linearSearch(arr,size,element);
    printf("your element %d is found on index %d",element,searchIndex);

    return 0;
}