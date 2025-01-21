**Error:** Implicitly declared classes are disabled by default.

**Fix:** Enable the preview feature using the `--enable-preview` flag when compiling.

**Corrected Code:**

```java
--enable-preview
String extra = "little";
String newStr = String.format("Mary had a %s lamb.", extra);
System.out.println(newStr);
```
