import java.util.Scanner;

public class QuickSort {

    public static void swap(int[] arr, int i, int j){
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

    public static void sort(int arr[], int low, int high){
        if(low<high){
            int pivot = partition(arr, low, high);

            sort(arr,low, pivot - 1);//left
            sort(arr,pivot + 1, high);//left
        }
    }

    protected static int partition(int[] arr, int low, int high){
        int pivot = arr[high];
        int i = low - 1;
        
        for(int j = low; j<high; j++){
            if(arr[j] <= pivot){
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr,i+1,high);
        return i+1;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        sc.close();
        sort(arr, 0, n-1);
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + ", ");
        }
    }
}
