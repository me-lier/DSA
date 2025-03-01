import java.util.*;
public class NoOfWays {
    static List<Integer> dp = new ArrayList<>(Arrays.asList(1, 2));

    public static int noOfWays(int n) {
        if (n < 0) return 0;
        if (n < dp.size()) return dp.get(n);

        while (dp.size() <= n) {
            dp.add(dp.get(dp.size() - 2) + dp.get(dp.size() - 1));
        }

        return dp.get(n);
    }

    public static void main(String[] args) {
        System.out.println(noOfWays(10));
    }
}
