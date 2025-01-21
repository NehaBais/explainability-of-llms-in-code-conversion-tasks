The error in the first line is that `s` was assigned to `"world!"`, but Go doesn't allow reassigning immutable variables, which includes string literals like "Hello, " and "world!". They are constants (unless declared with `const` keyword), hence they cannot be changed after initialization.

The fix would be declaring the `s` variable as a local variable or constant if this behavior is allowed in your program's context.

Here's how you might correct it in Java:

```java
String s = "Hello, world!"; // Fixed code
```

As for the second part of the question and the whole code block, Java has a similar feature to Golang's `:=` for declaring variables. It doesn't have the same restrictions because it is evaluated at runtime. So if you want the variable to take some value like "Hello, world!" during execution or at compile time, this cannot be done with just simple assignment in Java.
You can use `System.out.println()`, `return` etc for that purpose. 
Please provide more details about the context of your Go code and I will be happy to assist you further.
