#include <iostream>
using namespace std;
void reverseArray(int arr[], int n){
  int start = 0;
  int end = n-1;
  while(start < end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main(){

  int arr [5] = {1,2,3,4,5};
  int size = 5;
  // printing original array
  for(int i =0; i<size; i++){
    cout << arr[i] << " "; 
  }
cout << endl;
  reverseArray(arr , size);

  //printing reversed array
  for(int i =0; i<size;i++){
    cout << arr[i] << " ";

  }
}
