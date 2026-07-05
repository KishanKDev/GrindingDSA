class Solution {
    public int[] findDegrees(int[][] matrix) {
        int n = matrix.length;
        int[] degree = new int[n];

        for (int i = 0; i < n; i++) {
            int deg = 0;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    // self-loop contributes 2
                    deg += 2 * matrix[i][j];
                } else {
                    deg += matrix[i][j];
                }
            }
            degree[i] = deg;
        }

        return degree;
    }
}