import java.util.Scanner;

public class LinearSearch{

    public static int Linear(int arr[], int k){
        for(int i=0; i<arr.length; i++){
            if(arr[i] == k) return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        sc.close();
        System.out.println(Linear(arr, k)+1);
    }
}