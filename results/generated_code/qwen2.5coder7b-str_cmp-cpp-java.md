Here is the Java version of your C++ code:

```java
import java.util.Scanner;

public class Main {

    public static void demoCompare(String a, String b, String semantically) {
        System.out.println(a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ")
                + "exactly " + semantically + " equal.");
        System.out.println(a + " and " + b + " are " + ((!a.equals(b)) ? "" : "not ")
                + "exactly " + semantically + " unequal.");
        System.out.println(a + " is " + ((a.compareTo(b) < 0) ? "" : "not ") + semantically
                + " ordered before " + b + ".");
        System.out.println(a + " is " + ((a.compareTo(b) > 0) ? "" : "not ") + semantically
                + " ordered after " + b + ".");
    }

    public static void main(String[] args) {
        // Case-sensitive comparisons.
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first string:");
        String a = scanner.nextLine();
        System.out.println("Enter the second string:");
        String b = scanner.nextLine();
        demoCompare(a, b, "lexically");

        // Case-insensitive comparisons by folding both strings to a common case.
        String aLower = a.toLowerCase();
        String bLower = b.toLowerCase();
        demoCompare(aLower, bLower, "lexically");

        // Numeric comparisons; here 'Integer' could be any type for which the
        // relevant compareTo or equals operator is defined, eg Long, Float etc.
        int numA = Integer.parseInt(a);
        int numB = Integer.parseInt(b);
        demoCompare(numA + "", numB + "", "numerically");
    }
}
```
This Java code demonstrates all the string comparisons mentioned in your C++ code. The `demoCompare` method checks for exact equality, inequality, and lexical ordering of two strings or numbers, while comparing them in both case sensitive and insensitive manner.

Note: For numeric comparison, I've assumed you want to compare integer values. If you need to compare other types of numeric data, please adjust the code accordingly.
