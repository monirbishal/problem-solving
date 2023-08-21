#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    int size, arr[100];
    cout<<"How many values would you like to enter : ";
    cin>>size;
    
    cout<<endl<<"Enter "<<size<<" Numbers : ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    
    cout<<"Your Given List: ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    
    bubbleSort(arr, size);
    cout<<"\nList After Bubble Sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}