#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<"Arrays\n";
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        /* Normal for loop*/
        cout<<arr[i];
    }
    cout<<endl;
    int arr2[] = {10,20,30,40,50};
    for(int i:arr2){
        // Foreach loop
        cout<<i;
    }
    return 0;
}