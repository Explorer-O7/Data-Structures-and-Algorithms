public class Main{
	public static void main(String[] args){
		// num = 1D input array
		int[] num = {23, 45, 1, 2, 8, 19, -3, 16, -11, 28};
        	// target = the element to be searched
		int target = -3;
		int result = LinearSearch(num, target);
		if (result == -1)
			System.out.println(target + " not found!");
		else
			System.out.println(target + " found at index " + result);
	}
	// search in the array: return the index if the item is found.
	// else return -1
	static int LinearSearch(int[] arr, int target){
        // check for empty array
		if (arr.length == 0){
			return -1;
		}
		// run a for loop
		for (int index=0 ; index<arr.length ; index++){
			if (arr[index] == target){
				return index;
			}
		}
		// this line will executed if none of the return statements above have executed
		// hence the target is not found
		return -1;
	}
}
