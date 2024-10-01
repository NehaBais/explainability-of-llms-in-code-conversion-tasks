In Java, the equivalent code would look like this:

```java
String s1 = "hello";
System.out.println(s1 + " world");

String s2 = s1 + " world";
System.out.println(s2);

String s3 = ", ".join([s1, "world", "mom"]);
System.out.println(s3);

String s4 = ", ".join([s1, "world", "mom"]);
System.out.println(s4);
```

Explanation:

1. `s1` is a string variable that holds the value "hello".
2. The program prints out the concatenation of `s1` and " world" as "hello world".
3. `s2` is another string variable that also holds the same value as `s1`.
4. The program prints out the concatenation of `s1`, " world", and "mom" using `join()`. This operation results in ", ".join([s1, "world", "mom"]) returning a new string that is comma-separated list of values enclosed by quotation marks.
5. Finally, both `s3` and `s4` hold the same value as `s2`.
