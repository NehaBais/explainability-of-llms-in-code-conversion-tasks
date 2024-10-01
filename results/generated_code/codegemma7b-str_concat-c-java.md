```java
public class StringConcatenation {

    public static void main(String[] args) {

        String s = "hello";
        String s2 = s + " literal";

        System.out.println(s); // Output: hello
        System.out.println(s2); // Output: hello literal

        String s3 = new StringBuilder(s).append(" literal").toString();
        System.out.println(s3); // Output: hello literal
    }
}
```
