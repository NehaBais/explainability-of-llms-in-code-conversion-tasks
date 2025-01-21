import java.util.Arrays;

public class StringComparisonDemo {

    static void compare(String a, String b) {
        System.out.printf("%s%2d%2d%2d%2d%2d%2d 	%s\n", 
                a, 
                a.equals(b), a.compareTo(b)>0, a.compareTo(b)<0, a.compareToIgnoreCase(b)>0, a.compareToIgnoreCase(b)<0));
    }

    static void comparecase(String a, String b) 
{ 
 System.out.printf("%s%2d%2d%2d%2d%2d%2d 		%s 		 (ignoring case))\n", 
                a, 
                a.equals(b), a.compareTo(b)>0, a.compareTo(b)<0, a.compareToIgnoreCase(b)>0, a.compareToIgnoreCase(b)<0));
}

public static void main(String[] args) {
    String[] strings = {"YUP", "BELL", "BALL"};
    for (int i = 0; i < strings.length - 1; i++) {
            compare(strings[i], strings[i + 1]));
            comparecase(strings[i], strings[i + 1])));
        }
    }
}