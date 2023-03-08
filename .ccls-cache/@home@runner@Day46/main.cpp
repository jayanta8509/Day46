// Write Program to find sum of elements in an array
#include <iostream>
using namespace std;
int c = 0;
void sum(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    c = arr[i] + c;
  }
  cout << c;
}

int main() {
  int size;
  cout << "Enter the size: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  sum(arr, size);
}