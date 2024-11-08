import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int i = 0;
        while(scan.hasNextLine()) {
            String a = scan.nextLine();
            System.out.println(i+1 + " " + a);
            i++;
        }
    }
}
