Answer: In Java, strings are immutable, meaning that once they are created, their values cannot be changed. This means that the code needs to create a new string every time it wants to concatenate two strings together.

Here is the equivalent Java code:

```java
String s = "hello";
System.out.println(s + " literal");
String s2 = s + " literal";
System.out.println(s2);
```
