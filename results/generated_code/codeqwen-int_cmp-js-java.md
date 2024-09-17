Here's how you can convert this JavaScript code to Java:

First, let's create a simple user input function using Scanner class. We will use `System.in` for reading the data from the console and `Scanner` to parse it as integer.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int A, B;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the first integer:");
        A = sc.nextInt();

        System.out.println("Enter the second integer:");
        B = sc.nextInt();

        compare(A, B);

        sc.close();
    }

    public static void compare(int A, int B) {
        if (A==B) 
            System.out.println(A + " equals " + B);
        if (A < B) 
            System.out.println(A + " is less than " + B);
        if (A > B) 
            System.out.println(A + " Is greater than " + B);
    }
}
```

This Java code will prompt the user to input two integers, and then it checks each of the three comparison operators: equals, less than, and greater than. It also uses `System.out.println()` for output instead of `document.writeln()`. 

Please note that in Java, there is no need to specify type coercion or any additional conditions as those are automatically handled by Java during comparison operations between integers.
