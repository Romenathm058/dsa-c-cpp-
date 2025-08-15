#include<stdio.h>
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high= (size-1);
   
    //searching start
       while(low<=high){
            mid = (low + high)/2;
             if(arr[mid]== element){
                return mid;
            }if(arr[mid]<element){
                low = mid +1;
            }else{
                 high = mid-1;
            }
        }

//searchin ends
            printf("element not found\n");
        return -1;

}

int main(){
    int arr[]={1,4,7,9,16,24,56,69};//array must be sorted
    int size=sizeof(arr)/sizeof(int);
    int element = 5;
    int searchIndex= binarySearch(arr,size,element);
    printf("your element %d found on index %d",element,searchIndex);

    return 0;

}