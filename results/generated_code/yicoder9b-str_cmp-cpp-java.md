Here is the equivalent Java code for your C++ program. In Java there are in-built methods to compare Strings which make it easy and cleaner than C++:

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Case-sensitive comparisons.
        String a = (args.length > 0) ? args[0] : "1.2.Foo";
        String b = (args.length > 1) ? args[1] : "1.3.Bar";
        demoCompare(a, b, "lexically");
    
        // Case-insensitive comparisons by converting both strings to lowercase.
        demoCompare(a.toLowerCase(), b.toLowerCase(), "lexically");
    
        // Numeric comparison if the strings are not treated lexically
        try {
            double numA = Double.parseDouble(a);
            double numB = Double.parseDouble(b);
            demoCompare(numA, numB, "numerically");
        } catch (NumberFormatException e) {}  // Ignore if strings are not numbers
    }

    static <T extends Comparable<T>> void demoCompare(T a, T b, String semantically) {
        System.out.println(a + " and " + b + " are " 
            + ((a.compareTo(b) == 0) ? "" : "not ")
            + semantically + " equal.");
    
        System.out.println(a + " and " + b + " are " 
            + ((a.compareTo(b) != 0) ? "" : "not ")
            + semantically + " inequal.");
    
        System.out.println(a + " is " 
            + ((a.compareTo(b) < 0) ? "" : "not ")
            + semantically + " ordered before " + b + '.');
    
        System.out.println(a + " is "
            + ((a.compareTo(b) > 0) ? "" : "not ")
            + semantically + " ordered after " + b + '.');
    }
}
```

In the code above, `demoCompare` method takes any type that is comparable and demonstrates four kinds of comparison: equality, inequality, ordering before/after, based on a specific semantic (lexical or numerical). 

Please note that if you are comparing numeric strings for numerical comparison, they must be converted to the corresponding number type (`double` in this case); if not possible, it will throw `NumberFormatException` which we ignore with a try-catch block.
