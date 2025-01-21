Here is how you can convert the Python code to Java:

```java
public class Main {
    public static void main(String[] args) {
        compare("YUP", "YUP");
        compare("BALL", "BELL");
        compare("24", "123");
        compare(24, 123);
        compare(5.0, 5);
    }

    public static <T> void compare(T a, T b) {
        System.out.printf("%s is of type %s and %s is of type %s%n",
                a, a.getClass().getName(), b, b.getClass().getName());

        if (a instanceof String && b instanceof String) {
            // Lexical comparison
            int result = ((String)a).compareTo((String)b);
            System.out.printf("%s is %s than %s%n", 
                    result < 0 ? "less" : (result > 0 ? "greater" : "equal"),
                    a, b);

            // Case insensitive comparison using equalsIgnoreCase
            if (((String)a).equalsIgnoreCase((String)b)) {
                System.out.printf("%s is equal to %s irrespective of case%n", a, b);
            }
        }

        // Exact equality check (for all types)
        if (a.equals(b)) {
            System.out.printf("%s is equal to %s%n", a, b);
        }

        // Inequality check
        if (!a.equals(b)) {
            System.out.printf("%s is not equal to %s%n", a, b);
        }

        // Object identity checks
        if (a == b) {
            System.out.printf("%s has object identity with %s%n", a, b);
        } else {
            System.out.printf("%s does not have object identity with %s%n", a, b);
        }
    }
}
```
Please note that in Java, the `instanceof` keyword is used to check if an object is of a particular type.

In Java, you can't directly compare `Integer` and `int`, so I had to create separate cases for primitive types (`int`) and their corresponding wrapper classes (`Integer`). The same applies to floating point numbers. For numeric strings that represent integer values, the `compareTo()` method will return non-zero results because '123' is lexicographically less than '24'. If you want to compare them numerically, you would need to parse them into integers first:

Integer i1 = Integer.parseInt("24");
Integer i2 = Integer.parseInt("123");

if (i1.compareTo(i2) < 0) {
    System.out.println("24 is less than 123");
} else if (i1.compareTo(i2) > 0) {
    System.out.println("24 is greater than 123");
} else {
    System.out.println("24 is equal to 123");
}
