import java.util.Scanner;

public class BubbleSort {
    public static void sort(int arr[]){
         Boolean swapped;
         for(int i=0; i<arr.length - 1; i++){
            swapped = false;
            for(int j=0; j<arr.length - i - 1; j++){
                if(arr[j] > arr[j+1]){
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                    swapped = true;
                }
            }
            if(!swapped){ //for optimal
                return;
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
