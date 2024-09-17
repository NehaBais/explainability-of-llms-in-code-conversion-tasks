In Java, we don't have direct access to user input without using Swing or any other GUI libraries. However, for simplicity, I am going to assume that the inputs are hardcoded in this example:

```java
public class Main {
    public static void main(String[] args) {
        // Input numbers
        int a = 5;
        int b = 10;

        compare(a,b);
    }

    private static void compare(int a, int b) {
        if (a == b) {
            System.out.println(a + " equals " + b);
        }
        if (a < b) {
            System.out.println(a + " is less than " + b);
        }
        if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
    }
}
```

This code compares two integers 'a' and 'b'. If they are equal, it prints the equality message. If 'a' is less than 'b', it prints the lesser comparison message. If 'a' is greater than 'b', it prints the greater comparison message.
