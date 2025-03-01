import java.util.*;
public class Decimal_to_Binary{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum=0, c=0;
        // StringBuilder binary = new StringBuilder();
        while(n>0){
            sum+=Math.pow(10, c++) * (n%2);
            //or
            // binary should be in String...
            // binary.append(n%2);
            n/=2;
        }
        // System.out.println(binary.reverse().toString());
        System.out.println(sum);
        sc.close();
    }
}