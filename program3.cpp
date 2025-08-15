#include <iostream>
using namespace std;

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(myArray *a,int tSize,int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = new int[a->total_size];
    

}
void show(struct myArray *a){
    for(int i = 0; i < a->used_size; i++){
        cout << a->ptr[i] << " ";
    }
}
void setVAl(struct myArray *a){
    for (int i=0;i< a->used_size;i++){
        cout << "Enter the value for index " << i << ": ";
        cin >> a->ptr[i];
    }
}


int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    cout << "we arerunning setVal now" << endl;
    setVAl(&marks);
    cout << "we are running show now" << endl;
    show(&marks);

    return 0;
    
}