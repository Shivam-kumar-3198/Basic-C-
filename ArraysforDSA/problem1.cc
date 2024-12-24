/*
// Swap Alternate Numbers
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i+=2){
        cout<< arr[i] <<" ";
    } cout<<endl;
}

void swapalternate(int arr[], int size){

    for(int i=0; i<size; i+=2){ //yha i+=2 ka matlab ek element chor ke dusra agar i++ likhte to same element dubara swap ho jata
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}



int main(){
   int even[8] = {5,2,9,4,7,6,1,0};
   int odd[5]  = {11,33,9,76,43};

   swapalternate(even, 8);
   printArray(even, 8);

   cout<<endl;

   swapalternate(odd,5);
   printArray(odd,5);

}

*/
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Corrected the loop condition
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) { 
        // i+=2 ensures we skip one element to swap alternate elements
        if (i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapalternate(even, 8);
    printArray(even, 8);

    cout << endl;

    swapalternate(odd, 5);
    printArray(odd, 5);

    return 0;
}
