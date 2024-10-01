Here's the equivalent Java code for the given Python code snippet:
```java
String extra = "little";
String newStr = String.format("Mary had a %s lamb.", extra);
System.out.println(newStr);
```
In this Java code, we first define the `extra` variable to hold the value `"little"`. Then we use the `String.format()` method to replace `%s` in the string `"Mary had a %s lamb."` with the value of the `extra` variable. The resulting interpolated string is stored in the `newStr` variable, which we then print to the console using `System.out.println()`.

