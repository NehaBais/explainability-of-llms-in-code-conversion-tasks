Here's how you can do it in Java:
```java
String original = "Mary had a X lamb";
String little = "little";
String replaced = original.replaceAll("X", little); //changes the original string
```
In Java, you use the `replaceAll` method to replace all occurrences of a substring with another substring. The first argument is the substring to be replaced, and the second argument is the replacement string. In this case, we're replacing "X" with "little".

