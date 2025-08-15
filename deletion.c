#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int indDeletion(int arr[],int size,int index,int capacity){
    if(index >= capacity){
        printf("process failed\n");
       
        
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}



int main(){

    int arr[100]={1,3,2,7,18};
    int size =5;
    int index = 2;
    printf("before deletion -> \n");
    display(arr,size);
    printf("\n");
    indDeletion(arr,size,index,100);
    printf("after deletion ->\n");
    size -=1;//size--;
    display(arr,size);

    return 0;

}