import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        char[] a = A.toCharArray();
        char[] b = B.toCharArray();
        
        System.out.println(A.length() + B.length());
        
        if(a[0] > b[0]) System.out.println("Yes");
        else System.out.println("No");
        
        
        a[0] = Character.toUpperCase(a[0]);
        b[0] = Character.toUpperCase(b[0]);
        A = String.valueOf(a);
        B = String.valueOf(b);
        System.out.println(A + " " + B);
        
    }
}
