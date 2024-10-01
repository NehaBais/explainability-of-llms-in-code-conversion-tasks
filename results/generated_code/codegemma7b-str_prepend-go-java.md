```java
String s = "world!";
s = "Hello, " + s;
```

String s = "world!";
StringBuilder sb = new StringBuilder("Hello, ");
sb.append(s);
s = sb.toString();

