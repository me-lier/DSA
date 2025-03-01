import java.util.Scanner;
public class sayDigits{
    private static String[] nums =new String[]{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static void say(int n){
        if(n == 0) return;
        int rem = n%10;
        n /= 10;
        say(n);
        System.out.print(nums[rem] + " ");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        say(n);

    }
}