#include<iostream>
#include<ctime>
using namespace std;

int function(int n){
    int i;
    if(n <= 0){
        return 0;
    }else{
        i = rand() % n; // i in [0, n-1]
        cout << "this is " << i << endl;
        return function(i) + function(n-i-1);
    }
}
int main(){
    function(6); // Call the function with a fixed value for demonstration
    // int n;
    // cout << "enter a number as per your choice  ";//btwn 1 to 6
    // cin >> n;
    // cout <<"you entered "<<n<<endl;
    // srand(time(0)); // Seed the random number generator once
    // int result = function(n);
    // cout << "Result: " << result << endl;
    return 0;
}
