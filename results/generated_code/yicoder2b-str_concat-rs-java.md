Sure, here is the equivalent Java code for the given Rust program:

```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s);
        
        // Java doesn't directly concatenate strings, so we have to create a new String object 
        // Note that in Java, we use the '+' operator for string concatenation.
        String s1 = s + " world";
        System.out.println(s1);
    }
}
```
This Java program does exactly the same thing as the Rust program. It first creates a String variable `s` and prints its content, then it creates another string variable (`s1`) that is equal to the original string `s` concatenated with the string " world". Finally, both variables are printed to the console.
