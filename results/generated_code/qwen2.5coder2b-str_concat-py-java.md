Sure, here is the Java equivalent of your Python code:

```java
public class Main {
    public static void main(String[] args) {
        // Create a string variable equal to any text value.
        String s1 = "hello";

        // Create another string variable whose value is the original variable concatenated with another string literal.
        String s2 = s1 + " world";
        
        // Print the content of the variables.
        System.out.println(s1);
        System.out.println(s2);

        // Create a list of strings and use ", ".join() to concatenate them.
        List<String> list = Arrays.asList(s1, "world", "mom");
        String s3 = String.join(", ", list);

        // Print the content of the variable.
        System.out.println(s3);
    }
}
```

Note that Java uses a different syntax compared to Python. The main method is the entry point to your program in Java, and you need to create a class and add this main method inside it.

Here's what each part does:
- `String s1 = "hello";` creates a String variable with the value "hello".
- `String s2 = s1 + " world";` concatenates the string "world" to the end of `s1`.
- `System.out.println(s1);` prints the value of `s1`.
- `System.out.println(s2);` prints the value of `s2`.
- `List<String> list = Arrays.asList(s1, "world", "mom");` creates a new ArrayList and adds the values from `s1`, "world", and "mom".
- `String s3 = String.join(", ", list);` concatenates all elements in the List separated by commas.
