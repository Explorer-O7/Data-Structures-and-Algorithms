public class Main{
	public static void main(String[] args){
		// arr = sorted input array (only can be in increasing order)
		int[] arr = {-18, -12, -4, -2, 0, 2, 5, 9, 12};
		// target = element to be searched
		int target = 5;
		System.out.println(binarySearch(arr, target));
	}
	public static int binarySearch(int[] arr, int target){
		int start = 0; // starting index of the array
		int end = arr.length - 1; // ending index of the array
		int mid;
		while(start <= end){
			// find the middle index
			mid = start + (end-start) / 2; // -> mid = (start+end) / 2;
			if(target < arr[mid]){
				// move to the left sub-array
				end = mid - 1;
			}
			else if(target > arr[mid]){
				// move to the right sub-array
				start = mid + 1;
			}
			else{
				// element found, return the index
				return mid;
			}
		}
		// element not found
		return -1;
	}
}