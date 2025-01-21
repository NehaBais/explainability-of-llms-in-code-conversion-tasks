 Sure! Below is the Java code that performs string interpolation similar to the given Python code:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String newStr = String.format("Mary had a %s lamb.", extra);
        System.out.println(newStr);
    }
}
```

In this Java code, `String.format` is used to perform the string interpolation, similar to Python's f-string syntax. The placeholder `%s` in `String.format` is replaced by the value of `extra`.
