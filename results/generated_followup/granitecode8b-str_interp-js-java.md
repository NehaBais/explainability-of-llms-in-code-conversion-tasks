The error message indicates that the implicitly declared classes feature is not enabled by default in Java. To fix this, you need to enable the `--enable-preview` flag when compiling the code. Once you do so, the code will compile without errors. Here's the corrected code:
```java
String original = "Mary had a X lamb";
String little = "little";
String replaced = original.replaceAll("X", little);
```

