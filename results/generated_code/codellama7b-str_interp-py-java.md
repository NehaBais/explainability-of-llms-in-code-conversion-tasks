To convert this code from Python to Java, you can use a similar method of string interpolation. Here is an example of how the code would look in Java:

```
String extra = "little";
String newStr = String.format("Mary had a %s lamb.", extra);
System.out.println(newStr);
```
Note that in Java, you need to use the `String.format` method to perform string interpolation. The `%s` placeholder is used to indicate where the variable or value should be inserted into the string.

Also note that in Java, you can't use the `f` prefix to indicate a formatted string literal like you do in Python. Instead, you need to use the `String.format` method.
