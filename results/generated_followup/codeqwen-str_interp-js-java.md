Error: The implicitly declared classes are a preview feature and are disabled by default.

Fix: Use --enable-preview to enable implicitly declared classes.

Corrected Code:
```java
String original = "Mary had a X lamb.";
String little = "big";
String replaced = String.format(original, little);
System.out.println(replaced);
```
