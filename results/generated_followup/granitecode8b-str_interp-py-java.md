The error is due to the use of preview features in Java 17, which are not enabled by default. To fix this, you need to add the `--enable-preview` flag when compiling the code. The corrected code is as follows:
```java
String extra = "little";
String newStr = String.format("Mary had a %s lamb.", extra);
System.out.println(newStr);
```
Note that this code assumes you are using Java 17 or later, as the `String.format()` method is only available in that version and higher. If you are using an older version of Java, you will need to use a different approach for string interpolation.

