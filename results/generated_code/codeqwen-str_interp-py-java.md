In Java, there is no built-in function for string interpolation like the one in Python. However, you can use StringBuilder or Formatter to perform similar operations:

Here is how you would do it using StringBuilder:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String originalString = "Mary had a X lamb.";
        String new_str = new StringBuilder().append(originalString.replace("X",extra)).toString();
        System.out.println(new_str);
    }
}
```

And here is how you would do it using Formatter:


import java.util.Formatter;

public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String originalString = "Mary had a X lamb.";
        Formatter fmt = new Formatter();
        fmt.format(originalString, extra);
        System.out.println(fmt.toString());
    }
}


These two examples will replace the 'X' in the original string with the value of 'extra'.
