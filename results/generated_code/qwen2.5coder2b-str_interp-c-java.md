In Java, you can use String.format() method to achieve similar functionality of string interpolation. Here is the equivalent of your C code in Java:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        System.out.println("Mary had a %s lamb.", extra);
    }
}
```

In this code, we're creating an object of the `Main` class and calling the `main` method. Inside the `main` method, we declare a variable `extra` and assign it the value `"little"`. We then use the `System.out.println()` method to print out the string "Mary had a %s lamb.", where `%s` is used as a placeholder for the value of `extra`.
