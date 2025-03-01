import java.util.Scanner;

public class powxn{
    static int pow(int x, int n){
        if(x == 1) return 1;
        if(n == 1) return x;
        return x * pow(x, n-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        System.out.println(pow(x,n));
        sc.close();
    }
}