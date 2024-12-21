/*
The below code example implements the merge sort. The mergeSort function takes three arguments, an integer vector, lower bound, and higher bound, it divides the array into sub-parts. The merge function takes four arguments, an integer vector, lower bound, mid, and upper bound, it merges the sub-parts in ascending order & results a sorted array at last.
Example:
 Input: arr[] = {-4,-12,4,12,-8,8}, n = 6
 Output: -12 -8 -4 4 8 12
*/

void merge(vector<int>& arr, int low, int mid, int high) {
 vector<int> temp;
 int i=low, j=mid+1;
 while(i<=mid && j<=high) {
  if(arr[i] <= arr[j]) {
   temp.push_back(arr[i]);
   i++;
  } else {
   temp.push_back(arr[j]);
   j++;
  }
 }
 while(i<=mid) {
  temp.push_back(arr[i]);
  i++;
 }
 while(j<=high) {
  temp.push_back(arr[j]);
  j++;
 }
 for(int i=low; i<=high; i++) {
  arr[i] = temp[i-low];
 }
}

void mergeSort(vector<int>& arr, int low, int high) {
 if(low >= high) return;
 int mid = low + (high-low)/2;
 mergeSort(arr, low, mid);
 mergeSort(arr, mid+1, high);
 merge(arr, low, mid, high);
}

int main() {
 int n = 6;
 vector<int> arr;
 for(int i=0; i<n; i++) {
  int elem;
  cout << "Enter a number: ";
  cin >> elem;
  arr.push_back(elem);
 }
 mergeSort(arr, 0, n-1);
 for(auto itr : arr)
  cout << itr <<" ";
 return 0;
}
