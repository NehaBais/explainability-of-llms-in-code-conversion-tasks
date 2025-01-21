Here is the Java equivalent of your C code:

```java
public class Main {
    public static void main(String[] args) {
        String str = "my String";
        String cstr = "Changed ";
        String dup = new String(str.toCharArray());
        str = cstr + dup;
        System.out.println(str);
    }
}
```

In this Java code, we're using a String object to hold the text. We use `+` operator to concatenate the strings and `new String(str.toCharArray())` to duplicate the original string.

This program will output: "Changed my String".
