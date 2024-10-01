Here's the Java code that performs the same task as the given Python code:
```java
String extra = "little";
String newStr = String.format("Mary had a %s lamb.", extra);
System.out.println(newStr);
```
This code uses the `format()` method of the `String` class to perform string interpolation. The `%s` placeholder in the format string is replaced with the value of the `extra` variable, resulting in the output "Mary had a little lamb."

