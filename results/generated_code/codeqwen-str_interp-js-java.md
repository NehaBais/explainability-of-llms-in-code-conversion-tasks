In Java, you can use String's `format()` method to accomplish this:

```java
String original = "Mary had a X lamb.";
String little = "big";
String replaced = String.format(original, little);
System.out.println(replaced);
```

This will output: "Mary had a big lamb." 

The `format()` method replaces the placeholders in the original string with the values from the parameters passed to it. The "%s" is the format specifier for a String, so we use it here to replace the X in the original string with the value of little.
