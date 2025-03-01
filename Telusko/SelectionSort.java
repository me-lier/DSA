import java.util.Scanner;

public class SelectionSort {
    public static void sort(int arr[]){
        for(int i=0; i<arr.length - 1; i++){
            int key = i; //min...
            for(int j=i+1; j<arr.length; j++){
                if(arr[key] > arr[j]){
                    key = j;
                }
            }
            if(key!=i){
                int t = arr[key];
                arr[key] = arr[i];
                arr[i] = t;
            }
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
        sort(arr);
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + ", ");
        }
    }
}
