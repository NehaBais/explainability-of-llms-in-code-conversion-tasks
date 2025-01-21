The error message indicates that the Java compiler is rejecting the use of classes that were introduced in preview mode (java 16). These classes include `String`, `StringBuilder`, and `Chars`. To fix this, you can add the `--enable-preview` flag to the java command when compiling the code.
Here's the corrected code:
```java
String s = "abc texto化けdef";
int n = 2;
int m = 3;
System.out.println(s.substring(n, n + m));
System.out.println(s.substring(n));
StringBuilder sb = new StringBuilder(s);
sb.reverse();
System.out.println(sb.toString().substring(1));
int bpos = s.indexOf('b');
System.out.println(s.substring(bpos, bpos + m));
int epos = s.indexOf("ce");
System.out.println(s.substring(epos, epos + m));
```

