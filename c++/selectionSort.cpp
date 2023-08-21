#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    
    selectionSort(arr, size);
    cout<<"\nList After Selection Sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
