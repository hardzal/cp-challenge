import java.util.Calendar;
import java.time.LocalDate;
public class Solution {
    public static String getDay(String day, String month, String year) {
        /*
        * Write your code here.
        */
        LocalDate lc = LocalDate.of(Integer.parseInt(year),Integer.parseInt(month), Integer.parseInt(day)); 
        return lc.getDayOfWeek()+"";
    }
        public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        
        System.out.println(getDay(day, month, year));
    }
}
