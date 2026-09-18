#include <iostream>
#include <cassert>
using namespace std;
bool isSorted(const int* arr, const int size){
    if (size ==0 || size == 1){
        return true;
    }
    for (int i = 0 ; i<size-1 ; i++){
            if (arr[i] <= arr[i+1]){
                continue;
            }
            else{
                return false;
            }
        }
    return true;
}
void testDuplicateValues(){
    int arr[] = {3,3,3,3,3};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
void testIncreasing(){
    int arr[] = {1,2,3,4,5};
    bool result = isSorted(arr,5);
    assert(result == true);
}
int main(){
    testDuplicateValues();
    return 0;
}