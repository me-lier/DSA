import java.util.Scanner;

public class BinarySearch_rec {

    public static int Binary_rec(int arr[], int k , int low, int high){
        if(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == k) return mid;
            if(arr[mid] > k) return Binary_rec(arr, k, low, mid - 1);
            if(arr[mid] < k) return Binary_rec(arr, k, mid + 1, high);
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
        System.out.println(Binary_rec(arr, k, 0, n-1)+1);
    }
}