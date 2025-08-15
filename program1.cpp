#include<iostream>
using namespace std;

void fun1(int array[],int n){//n = length
    int sum =0;
    int product =1;
    for(int i=0;i<n;i++){
        sum += array[i];
    }for(int i=0;i<n;i++){
        product *=array[i];

    }
    cout << "sum is "<<sum<<endl;
    cout << "product is "<<product<<endl;

}

int main(){

    int arr[]={1,2,3,4};
    fun1(arr,4);
    return 0;
}