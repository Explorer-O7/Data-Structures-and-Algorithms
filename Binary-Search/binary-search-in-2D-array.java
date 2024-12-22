import java.util.Arrays;
class Main{
    public static void main(String []args){
        // matrix = a 2D array(matrix), sorted by both row-wise & column-wise
        int[][] matrix = {
            {2,4,6,8},
            {5,7,9,11},
            {9,11,13,15},
            {12,14,16,18}
        };
        // target = element to be searched
        int target = 10;
        System.out.println(Arrays.toString(binarySearchIn2dArray(matrix, target)));
    }
    static int[] binarySearchIn2dArray(int[][] matrix, int target){
        int row = 0; // 1st row index
        int col = matrix.length - 1; // last index of each row
        while(row < matrix.length && col >= 0){
            // element found at [row,col] index
            if(target == matrix[row][col]){ return new int[]{row, col}; }
            // reduce col by 1
            else if(target < matrix[row][col]){ col--; }
            // increase row by 1
            else{ row++; }
        }
        // element not found
        return new int[]{-1, -1};
    }
}
