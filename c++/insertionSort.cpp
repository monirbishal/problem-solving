#include <iostream>
using namespace std;
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    
    insertionSort(arr, size);
    cout<<"\nList After Insertion Sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}