#include <bits/stdc++.h>

using namespace std;

class Vector {
  public : 
    int size;
    int capacity; 
    int *arr;
    Vector() {
      size = 0;
      capacity = 1;
      arr = new int[1];
    }
    void add(int ele) {
      if (size == capacity) {
        capacity *= 2; 
        int* arr2 = new int[capacity];
        for (int i = 0; i < size; i++) {
          arr2[i] = arr[i]; 
        }
        arr = arr2; 

      }
      arr[size++] = ele;
    }
    void print() {
      for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
      }
      cout << '\n';
    }
};

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  Vector v; 
  cout << "Size : "<< v.size << " " << "Capacity: " << v.capacity << '\n'; // 0 1
  v.add(1);
  v.print();
  cout << "Size :  "<< v.size << " " << "Capacity: " << v.capacity << '\n'; // 1 1
  v.add(2);
  v.print();
  cout << "Size :  "<< v.size << " " << "Capacity: " << v.capacity << '\n'; //  2 2
  v.add(3);
  v.print();
  cout << "Size : "<< v.size << " " << "Capacity: " << v.capacity << '\n'; // 3 4
  v.add(4);
  v.print();
  cout << "Size : "<< v.size << " " << "Capacity: " << v.capacity << '\n'; // 4 4


  return 0;
}