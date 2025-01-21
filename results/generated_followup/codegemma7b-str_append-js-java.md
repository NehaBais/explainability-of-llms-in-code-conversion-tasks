**Error:** Implicitly declared classes are disabled by default.

**Fix:** Enable the preview feature using the `--enable-preview` flag when compiling.

**Corrected Code:**

```java
--enable-preview
String s1 = "Hello";
s1 += ", World!";
System.out.println(s1);
```
