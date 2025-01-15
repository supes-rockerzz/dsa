#include<bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e) {

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else  {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return s;  // returns the index where the key can be inserted if not found
}
int main() {
  int arr[5]={2,6,8,9,12};
  int key=7;
  cout<<"index of "<<key<< " : "<<binarySearch(arr,5,7);
}