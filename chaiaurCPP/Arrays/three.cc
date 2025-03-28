#include<iostream>
using namespace std;

int* prepare ChaiOrders(int cups){
    int* orders = new int[cups];
    for(int i=0; i<cups; i++){
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main(){

}