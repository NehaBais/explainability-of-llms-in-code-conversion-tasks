Here is the converted code from C++ to Java:
```java
import java.util.Scanner;
public class StringComparison {
 public static void main(String[] args) {
 Scanner input = new Scanner(System.in);
 
 // Case-sensitive comparisons.
 String a = (args.length > 0) ? args[0] : "1.2.Foo";
 String b = (args.length > 1) ? args[1] : "1.3.Bar";
 System.out.println(a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ") + "exactly equal.");
 System.out.println(a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ") + "equal.");
 System.out.println(a + " is " + ((a.compareTo(b) < 0) ? "" : "not ") + "ordered before " + b + ".");
 System.out.println(a + " is " + ((a.compareTo(b) > 0) ? "" : "not ") + "ordered after " + b + ".");
 
 // Case-insensitive comparisons by folding both strings to a common case.
 String ca = a.toLowerCase();
 String cb = b.toLowerCase();
 System.out.println(ca + " and " + cb + " are " + ((ca.equals(cb)) ? "" : "not ") + "exactly equal.");
 System.out.println(ca + " and " + cb + " are " + ((ca.equals(cb)) ? "" : "not ") + "equal.");
 System.out.println(ca + " is " + ((ca.compareTo(cb) < 0) ? "" : "not ") + "ordered before " + cb + ".");
 System.out.println(ca + " is " + ((ca.compareTo(cb) > 0) ? "" : "not ") + "ordered after " + cb + ".");
 
 // Numeric comparisons; here 'double' could be any type for which the
 // relevant >> operator is defined, eg int, long, etc.
 double numA = Double.parseDouble(a);
 double numB = Double.parseDouble(b);
 System.out.println("numA is " + ((numA < numB) ? "" : "not ") + "less than numB.");
 System.out.println("numA is " + ((numA > numB) ? "" : "not ") + "greater than numB.");
 }
}
``` 
This code prompts the user to enter two strings, compares them for exact equality and inequality, and then determines their lexical order. It also performs case-insensitive comparisons by converting both strings to lowercase before comparison. Finally, it compares two numeric strings and determines if the first is less than or greater than the second.

