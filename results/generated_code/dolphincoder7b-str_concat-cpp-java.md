To convert the given C++ code to Java, we can create a String object for each variable and use the + operator to concatenate them:
```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s + " literal");
        String s2 = s + " literal";
        System.out.println(s2);
    }
}
```
This code creates a string object with the value "hello" and then prints it followed by a space and another string literal, "literal". It then concatenates this new string to the original one and assigns it to another string variable named s2. Finally, it also prints the content of the s2 variable.
