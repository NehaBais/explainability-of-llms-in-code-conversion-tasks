Here's the Java code that accomplishes the same task as the Python code:
```java
String s1 = "hello";
System.out.println(s1 + " world");

String s2 = s1 + " world";
System.out.println(s2);

String[] arr = {"hello", "world", "mom"};
String s3 = String.join(", ", arr);
System.out.println(s3);
```
In this Java code, we first declare a string variable `s1` and assign it the value "hello". We then use the `+` operator to concatenate `s1` with the string literal " world" and print the result using `System.out.println()`.
Next, we declare another string variable `s2` and assign it the value of `s1` concatenated with " world" using the same operator. We then print the value of `s2`.
Finally, we create an array of strings `arr` containing "hello", "world", and "mom". We use the `String.join()` method to concatenate the elements of the array into a single string with ", " as the separator. We assign this resulting string to a new string variable `s3` and print it using `System.out.println()`.

