#include <iostream>
using namespace std;

bool find(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true; // Return true if the key is found
    }
  }

  return false; // Return false if the key is not found
}

int main() {
  int arr[10] = {1, 5, 15, -4, -6, -9, 3, 7, 8, 9};

  cout << "Enter the number you want to find: ";
  int key;
  cin >> key;

  bool found = find(arr, 10, key);

  if (found == true) {
    cout << "Key is present in the array." << endl;
  } else {
    cout << "Key not found in the array." << endl;
  }

  return 0;
}
