import java.util.Scanner;
public class ReverseString{
    static String Reverse(String str){
        int size = str.length();
        String res = fun(str, size, 0);
        return res;
    }
    //abcd
    static String fun(String str, int size, int i){
        if(i >= size){
            return "";
        }
        char ch = str.charAt(i);
        String ans = fun(str, size, i+1);
        return ans + ch;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();
        System.out.println(Reverse(str));
    }
}