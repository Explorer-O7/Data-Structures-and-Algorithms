public class Main{
	public static void main(String[] args){
		// arr = sorted input array (can be either in increasing order or decreasing order)
		int[] arr = {99, 75, 54, 20, 9, 0, -11, -30, -47, -69, -95};
		// target = element to be searched
		int target = 75;
		System.out.println(orderAgnosticBinarySearch(arr, target));
	}
	public static int orderAgnosticBinarySearch(int[] arr, int target){
		int start = 0; // starting index of the array
		int end = arr.length - 1; // ending index of the array
		int mid;
		// check the order of the input set
		boolean isAscending = arr[start] < arr[end];
		while(start <= end){
			// find the middle index
			mid = start + (end-start) / 2; // -> mid = (start+end) / 2;
			if(target == arr[mid]) return mid; // element found, return the index
			// input type is of increasing order
			if(isAscending){
				if(target < arr[mid]){
					// move to the left sub-array
					end = mid - 1;
				}
				else{
					// move to the right sub-array
					start = mid + 1;
				}
			}
			// input type is of decreasing order
			else{
				if(target > arr[mid]){
					// select left sub-array
					end = mid - 1;
				}
				else{
					// select right sub-array
					start = mid + 1;
				}
			}
			
		}
		return -1; // element not found
		
	}
}