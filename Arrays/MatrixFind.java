public class MatrixFind{
    public static void main(String[] args) {
        int arr[][] = {{1,2,2},{3,3,4},{5,5,6}};

        int k = 3;
        int i = 0;

        if(k <= 3) i = k/3;
        System.out.println(arr[i][k - i*3]);


        
    }
}