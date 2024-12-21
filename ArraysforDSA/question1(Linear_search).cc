// Linear search
// Whether 1 is present in the array or not
/*
kya hota hai Linear search
suppose ek array hai [1,2,3,4,5,6,7]
abb isme se humne number 7 ko dhundna hai 
abb hum baari baari se sare element ko dekh rhe hai 
jbb tak hume number na mil jaye
issi ko Linear search bolte hai
*/

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
   for(int i=0; i<size;i++){
    if(arr[i]==key){
        return 1;
    }
   }
   return 0;
}

int main(){
     int arr[10] ={5,7,-2,10,22,-2,0,5,22,1};

     cout<<"Enter the element to search for " <<endl;
     int key;
     cin>>key;

     bool found = search(arr,10,key);

     if(found) {
        cout<<"Key is present "<< endl;

     }

     else{
        cout<<"Key is absent"<<endl;
     }

     return 0;
}