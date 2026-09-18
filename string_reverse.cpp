#include <iostream>
using namespace std;
void swap(char &a, char &b ){
    char temp = a;
    a = b;
    b = temp;
}
int main() {
    int size;
    cout<<"What is the length of your word?"<<endl;
    cin>>size;
    char *word = new char[size];
    cout<<"Enter word"<<endl;
    for (int i = 0 ; i<size ; i++){
        cin>>word[i];
    }
    for (int j = 0 ; j<size/2 ; j++){
        swap(word[j],word[size-j-1]);
    }
    for(int k = 0; k<size ; k++){
        cout<<word[k];
    }
    return 0;
}