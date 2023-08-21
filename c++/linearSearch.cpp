#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, target, arr[100];
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
    
    cout<<endl<<endl<<"Provide a number to search : ";cin>>target;
    
    int index = linearSearch(arr, size, target);
    
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    
    return 0;
}