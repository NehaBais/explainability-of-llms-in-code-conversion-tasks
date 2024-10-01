Here is the Java code that meets the requirements:
```java
String s1 = "hello";
System.out.println(s1 + " world");
String s2 = s1 + " world";
System.out.println(s2);
List s3 = Arrays.asList("hello", "world", "mom");
String s4 = String.join(", ", s3);
System.out.println(s4);
String s5 = String.join(", ", s3);
System.out.println(s5);
``` 
The output of this code will be:

hello world
hello world
hello, world, mom
hello, world, mom

