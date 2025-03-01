import java.util.Scanner;

public class BinarySearch{

    public static int Binary(int arr[], int k){
        int low = 0; 
        int high = arr.length - 1;
        while(low < high){
            int mid = (low + high) / 2;
            if(arr[mid] == k) return mid;
            if(arr[mid] > k) high = mid - 1;
            else if(arr[mid] < k) low = mid + 1;
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
        System.out.println(Binary(arr, k)+1);
    }
}