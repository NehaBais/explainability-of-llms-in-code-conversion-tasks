Error: Implicitly declared classes are a preview feature and are disabled by default, so the Java compiler does not allow them by default.
Fix: Enable implicitly declared classes in the Java compiler options by adding the `--enable-preview` flag when compiling the code.
Corrected code:
```java
String original = "Mary had a X lamb";
String little = "little";
String replaced = original.replace("X", little); //does not change the original string
```
