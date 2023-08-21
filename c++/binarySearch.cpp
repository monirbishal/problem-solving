#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while(left <= right) {
    int mid = left + (right - left) / 2;  // Calculate mid inside the loop

        if (target == arr[mid])
        {
            return mid;
        }
        
        if(target<arr[mid])
        {
            right = mid-1;
        }
        
        if (target>arr[mid])
        {
            left = mid+1;
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
    
    int index = binarySearch(arr, size, target);
    
    if (index != -1) {
        cout <<endl<< "Element " << target << " found at index " << index << endl;
    } else {
        cout <<endl<< "Element " << target << " not found in the array." << endl;
    }
    return 0;
}