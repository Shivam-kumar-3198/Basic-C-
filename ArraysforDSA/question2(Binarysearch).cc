// Reverse an array

/*question
find unique
find duplicate
Array intersection
pair sum vvi
triplet sum
sort 0 and 1
*/

/*
#include<iostream>
using namespace std;


void reverse(int arr[], int n){

    int start =0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<"arr[i]"<<" ";

    }
    cout<<endl;
}

int main(){

    int arr[6] ={1,4,0,5,-2,15};
    int brr[5] ={2,6,3,9,4};
    
    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
    
    

}
*/
#include <iostream> // For input/output operations
using namespace std;

// Function to reverse an array
void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) { // Use < instead of <= to avoid unnecessary swap when start == end
        swap(arr[start], arr[end]); // Swaps elements at start and end
        start++;
        end--;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Correct syntax to print array elements
    }
    cout << endl;
}

// Main function
int main() {
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6); // Reverse the first array
    reverse(brr, 5); // Reverse the second array

    cout << "Reversed array 1: ";
    printArray(arr, 6); // Print the reversed first array

    cout << "Reversed array 2: ";
    printArray(brr, 5); // Print the reversed second array

    return 0; // Indicate successful program execution
}
