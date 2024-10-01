 Here is the equivalent Java code for your Python script:

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "hello";
        System.out.println(s1 + " world");

        String s2 = s1 + " world";
        System.out.println(s2);
        
        s1 = "hello";
        String result = String.join(", ", new String[]{s1, "world", "mom"});
        System.out.println(result);
    }
}
```
Please note that in Java, the `print` statement is replaced with `System.out.println`, and to concatenate strings we use `+` operator or `String.join`. Also, to print an array we need to create a new instance of String[] and pass it to join function.
