Below is the equivalent Java code for your C++ program. 
Note that in Java, there are no separate methods to compare strings using case sensitivity or case insensitivity. Instead, you use `compareTo()` method which returns an integer value indicating whether it's less than(return a negative number), equal to (zero) or greater than(positive number). Also for numeric comparisons in Java we have the `Double.parseDouble()` function that can be used to parse strings into numbers.
```java
public class Main {
    public static void demoCompare(Comparable<String> a, Comparable<String> b, String semantically)  {
        System.out.println(a + " and " + b  + " are " +  (a.compareTo((String)b) == 0 ? "" : "not ")+"exactly lexically equal." );
        
        System.out.println(a + " and " + b  + " are " +  (a.compareTo((String)b)!= 0 ? "" : "not ")+ semantically + "inequal."  );
            
        System.out.println(a + " is " +  (a.compareTo((String)b) < 0 ? "" : "not ")  + semantically +" ordered before " + b + '.' );
        
        System.out.println(a + " is " +  (a.compareTo((String)b) > 0 ? "" : "not ")  + semantically +" ordered after " + b + '.' );
    }
  
    public static void main(String[] args) {
        String a = (args.length > 1) ? args[1] : "1.2.Foo";
        String b = (args.length > 2) ? args[2] : "1.3.Bar";
      
        demoCompare(a, b,"lexically");  
        
        a = a.toLowerCase();
        b = b.toLowerCase();
        
        demoCompare(a, b,"lexically"); 
        
        double numA = Double.parseDouble(a);
        double numB = Double.parseDouble(b);
      
        demoCompare(numA, numB,"numerically");  
    }
}
```
This Java program will follow the same logic as your C++ code but with syntax and features available in Java instead of C++. It also assumes that you are passing numeric strings to it through command line arguments for comparison which is different from C++ where these numbers are assumed to be default argument values if no arguments provided during execution.

