#include <iostream>
using namespace std;

class myArray{
    public:
    int total_size;
    int used_size;
    int *ptr; 

    myArray(int tSize, int uSize) {
        total_size = tSize;
        used_size = uSize;
        ptr = new int[total_size];
    }

    ~myArray() {
        delete[] ptr;
    }
};

void show(myArray *a){
    for(int i = 0; i < a->used_size; i++){
        cout << a->ptr[i] << " ";
    }
}
void setVAl(myArray *a){
    for (int i=0;i< a->used_size;i++){
        cout << "Enter the value for index " << i << ": ";
        cin >> a->ptr[i];
    }
}
int main(){
    myArray marks(10, 2);
    cout << "we are running setVal now" << endl;
    setVAl(&marks);
    cout << "we are running show now" << endl;
    show(&marks);

    return 0;
    
}
    
