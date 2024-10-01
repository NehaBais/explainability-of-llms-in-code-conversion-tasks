Sure, here is the equivalent Java code for the given Python program:

```java
public class Main {
    public static void main(String[] args) {
        // Create string variable
        String s1 = "hello";
        System.out.println(s1 + " world"); // Prints hello world

        // Create another string variable with the concatenation of s1 and a string literal 
        String s2 = s1 + " world";
        System.out.println(s2); // Prints hello world

        // Concatenate another string to s1 and join it with ", "
        String s3 = s1 + ", " + "world" + ", " + "mom";
        System.out.println(s3); // Prints hello, world, mom

        // Create the string variable again with the concatenation of s2 and another string literal 
        String s4 = s2 + ", " + "mom";
        System.out.println(s4); // Prints hello world, mom
    }
}
```
