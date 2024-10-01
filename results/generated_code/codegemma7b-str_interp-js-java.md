```java
public class StringInterpolation {

    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";

        String replaced = original.replace("X", little);

        System.out.println("Original string: " + original);
        System.out.println("Replaced string: " + replaced);
    }
}
```
