 Sure! Here is the equivalent Java code for the given Go program:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "little";
        String out = String.format(str, txt);
        System.out.println(out);
    }
}
```

This Java code performs the same string interpolation as the Go code. The `String.format` method is used to replace the placeholder in the original string with the value of the variable `txt`.
