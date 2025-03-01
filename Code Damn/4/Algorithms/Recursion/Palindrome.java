import java.util.Scanner;

public class Palindrome{
    static boolean isValid(String str){
        return fun(str, 0, str.length()-1);
    }
    static boolean fun(String str, int i, int j){
        if(i < j){
            if(str.charAt(i) != str.charAt(j)) return false;
            return fun(str, ++i, --j);
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();
        System.out.println(isValid(str));
    }
}