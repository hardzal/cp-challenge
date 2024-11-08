import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double d;
        int i;
        String s;
        i = scan.nextInt();
        d = scan.nextDouble();
        scan.nextLine();
        s = scan.nextLine();

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}

