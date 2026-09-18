#include <iostream>
using namespace std;
void analyze_pointer(int *ptr){
    cout<<"Address of pointer"<<ptr<<endl;
    cout<<"Value of pointer"<<*ptr<<endl;
}

int main() {
    int iValue = 6;
    analyze_pointer(&iValue);
    int *heap = new int(6);
    analyze_pointer(heap);
    return 0;
}