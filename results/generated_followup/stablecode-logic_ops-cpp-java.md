The error in the provided Java code is related to missing semicolons (`;`) at the end of each statement within the `print_logic` method.

To fix this issue, we need to add semicolons at the end of each statement. The corrected code should look like this:

```java
public class Main {

    static void print_logic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b)));
        System.out.println("a or b is " + (a || b)));
        System.out.println("not a is " + (!a)));
    }

    public static void main(String[] args) {
        print_logic(true, false);
    }
}
```

In the above code, I have added semicolons at the end of each statement to fix the compilation error. The rest of the code remains unchanged.
