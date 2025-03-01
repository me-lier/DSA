import java.util.Scanner;

public class MergeSort{

    public static void sort(int arr[], int low, int high){
        if(low < high){
            int mid = (low + high) / 2;
            sort(arr, low, mid);
            sort(arr, mid + 1, high);

            merge(arr, low, mid, high);
        }
    }

    public static void merge(int arr[], int low, int mid, int high){

        int n1 = mid - low + 1;
        int n2 = high - mid;

        int[] l = new int[n1];
        int[] r = new int[n2];

        for(int i=0; i<n1; i++){
            l[i] = arr[low + i];
        }

        for(int i=0; i<n2; i++){
            r[i] = arr[mid + i + 1];
        }

        int i = 0;
        int j = 0;
        int k = low;

        while(i<n1 && j<n2){
            if(l[i] <= r[j]){
                arr[k++] = l[i++];
            }else{
                arr[k++] = r[j++];
            }
        }

        while(i<n1){
            arr[k++] = l[i++];
        }

        while(j<n2){
            arr[k++] = r[j++];
        }
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