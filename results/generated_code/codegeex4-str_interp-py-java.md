In Java, we can achieve this using String.format() method.

Here's how you can convert your Python code into Java:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String newStr = String.format("Mary had a %s lamb.", extra);
        System.out.println(newStr);
    }
}
```
This code declares a string variable `extra` and assigns it the value "little". Then, it uses the `String.format()` method to create a new string that inserts the value of `extra` into the placeholder `%s` in the original string. Finally, it prints out the new string.
