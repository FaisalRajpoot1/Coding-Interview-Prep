// swap alternaties
#include <iostream>
using namespace std;
void printArray(int arr[], int n){
  for(int i =0; i<n; i++){
    cout << arr[i] << " ";
  }
}


void swapAlternate(int arr[], int n){
  
  for(int i=0; i<n; i+=2){
    if(i+1 < n){
      swap(arr[i], arr[i+1]);
    }

  }
}

int main(){

int odd[5] = {1,22,13,41,35};
  int even[6] = {11,4,3,8,6,12};
  // int size = 5;
  swapAlternate(even , 6);
  printArray(even , 6);
cout << endl;
  swapAlternate(odd , 5);
  printArray(odd , 5);

  
}
