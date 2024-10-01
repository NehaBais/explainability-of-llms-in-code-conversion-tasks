```java
import java.util.Scanner;

public class Substring {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = "ABCDEFGH";

        int n, m; // For reference
        System.out.println("Index:  01234567");
        System.out.println("String:  " + input);

        System.out.print("Start ");
        n = scanner.nextInt();
        System.out.print(", length ");
        m = scanner.nextInt();
        String result = input.substring(n, n+m);
        System.out.printf("%s%n", result);

        System.out.print("Start ");
        n = scanner.nextInt();
        System.out.println(", to end:       " + input.substring(n));

        System.out.println("All but last:          " + input.substring(0, input.length() - 1));

        String knownChar = "D";
        int dx = input.indexOf(knownChar);
        System.out.print("Start '" + knownChar + "', length ");
        m = scanner.nextInt();
        result = input.substring(dx, dx+m);
        System.out.printf("%s%n", result);

        String knownSubstring = "DE";
        int sx = input.indexOf(knownSubstring);
        System.out.print("Start \"" + knownSubstring + "\", length ");
        m = scanner.nextInt();
        result = input.substring(sx, sx+m);
        System.out.printf("%s%n", result);
    }
}
```
The Golang code snippet uses the built-in functions in the `strings` package to perform substring operations on a string. In Java, we use methods from the `String` class for this purpose. The input and output formats are adjusted accordingly to match the desired outputs. 

Note: This is just a basic implementation, you'll have to handle exceptions if necessary as per your specific requirements. Also, be aware that in Java strings are immutable (unlike Golang), so any changes made to them will return a new string instead of modifying the original one. If memory efficiency is a concern for you, you may want to convert the input string to byte array and perform operations on it directly.
