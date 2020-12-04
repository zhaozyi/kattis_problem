import java.util.Scanner;

public class FiftyShades {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int r = 0;
        for (int i = 0; i < n; ++i) {
            String s = input.next().toLowerCase();
            if (s.contains("pink") || s.contains("rose")) {
                ++r;
            }
        }
        if (r == 0) {
            System.out.println("I must watch Star Wars with my daughter");
        } else {
            System.out.println(r);
        }
    }
}