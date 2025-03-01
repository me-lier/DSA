import java.util.*;
public class Binary_to_Decimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        int sum=0,c=0;
        while(n>0){
            sum+=Math.pow(2, c++)*(n%10);
            n/=10;
        }
        System.out.println(sum);
    }
}
