
In Java, you can create a string variable and append it with another string literal in the most idiomatic way by using the concatenation operator (`+`) and placing the string literals on either side of the operator. Here's an example:

```
String s1 = "Hello";
s1 += ", World!";
System.out.println(s1);
```

This code will output `Hello, World!`. Note that in Java, string variables are immutable by default, which means that they cannot be changed after they have been created. To append a string to an existing variable, you need to create a new string object that contains the original value and the appended string.

In this example, we first create a string variable `s1` with the value "Hello". Then, we use the concatenation operator (`+`) to append the string literal ", World!" to the existing value of `s1`. Finally, we print the updated value of `s1` using the `System.out.println()` method.
