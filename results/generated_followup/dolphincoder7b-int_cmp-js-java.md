The error occurs because Java 14 introduced preview features, but it requires the use of the `--enable-preview` flag to enable these features for the current compilation process. The `--enable-preview` flag is used to compile the code with the experimental features enabled so that they can be reviewed and potentially become standard language features in future versions of Java.

To fix this error, you should use the `--enable-preview` flag when compiling the Java code.

Once the compilation is successful, you can run the program.

Here's the corrected code in a single line:

```java
public static void compare  (int a, int b){
    if(a == b)
        System.out.println(a + " equals " + b);
    else if(a < b) 
        System.out.println(a + " is less than " + b); 
    else
        System.out.println(a + " is greater than " + b); 
}
```

This should prompt for two integers from the user and then output a message indicating whether the first integer is less than, equal to, or greater than the second.
