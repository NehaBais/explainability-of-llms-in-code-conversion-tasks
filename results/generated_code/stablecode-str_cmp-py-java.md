Below is the equivalent Java code for the given Python code:

```java
public class Main {

    static void compare(String a, String b){
        System.out.printf("Comparison between %s and %s", a, b));

        if (a.compareTo(b) < 0)) {
            System.out.println('%r is strictly less than  %r' 
% ((String)a, (String)b)));
        }
        if (a.compareTo(b) <= 0)) {
            System.out.println('%r is less than or equal to 
%r' 
% ((String) a, (String) b)));
        }

        if (a.compareTo(b) > 0)) {
            System.out.println('%r is strictly greater than  %r' 
% ((String) a, (String) b)));
        }
        if (a.compareTo(b) >= 0)) {
            System.out.println('%r is greater than or equal to 
%r' 
% ((String) a, (String) b)));
        }

        // Demonstrating case sensitive comparison
        if ("YUP".equals("YUP"))) {
            System.out.println('Case Sensitive Comparison: %r is equal to %r' 
% ((String)a, (String)b)));
        } else {
            System.out.println('Case Sensitive Comparison: %r is not equal to %r' 
% ((String) a, (String) b)));
        }

        // Demonstrating case insensitive comparison
        if ("YUP".equalsIgnoreCase("yup"))) {
            System.out.println('Case Insensitive Comparison: %r is equal to %r' 
% ((String) a, (String) b)));
        } else {
            System.out.println('Case Insensitive Comparison: %r is not equal to %r' 
% ((String) a, (String) b)));
        }

    }

    public static void main(String[] args){
        compare("YUP", "YUP");
        compare("BALL", "BELL");
        compare("24", "123");
        compare(24, 123);
        compare(5.0, 5);
    }

}
```

This Java code is an equivalent conversion of the given Python code snippet for comparing two strings in both exact and lexical comparisons, as well as case sensitive and insensitive comparisons.
