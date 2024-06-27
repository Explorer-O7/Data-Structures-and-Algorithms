public class Main{
	public static void main(String[] args){
		// arr = 2D input array
		int[][] arr = {
		            {18, 24, 69, 99},
		            {12, 4, 0,},
		            {30, 46, 55, 89, 10},
		            {-4, 6}
		        };
                	// target = element to be searched
		        int target = 55;
		        System.out.println(Arrays.toString(linearSearch2DArray(arr, target)));
	}
	static int[] linearSearch2DArray(int[][] arr, int target){
        // this for loop itreates on row(s)
	    for(int row=0 ; row<arr.length ; row++){
            // this for loop iterates on column(s)
	        for(int col=0 ; col<arr[row].length ; col++){
	            if(arr[row][col] == target)
	            {
				   // returning a 2D array object containing co-ordinates of the target value -> (target)
	                return new int[]{row, col};
	            }
	        }
	    }
		// returning a default value if the target is not found
	    return new int[]{-1, -1};
	}
}
