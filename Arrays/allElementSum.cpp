#include <iostream>
using namespace std;
int sum(int arr[], int n){
  int sum =0;
  for(int i=0; i<n; i++){
    sum = sum + arr[i];
    
  }
  return sum;
}

int main(){

int arr[5] = {1,2,3,4,5};
  int size = 5;
  sum(arr , size);
  cout << "sum of all elements in array is " << sum(arr , size) << endl;
}
