In Java, you can achieve this by using string concatenation methods. Below is the equivalent code for your Rust snippet:

```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s);  // Output: hello
        
        String s1 = s + " world";
        System.out.println(s1); // Output: hello world
    }
}
```

In this code, we first declare a `String` variable `s` and assign it the value of the string `"hello"`. We then print out the content of `s`, which is "hello". 

Next, we create another `String` variable `s1` that concatenates the original string `s` with the string literal `" world"` using the `+` operator. The resulting concatenated string is assigned to `s1`, and it is printed out. This will print "hello world".

Please note that in Java, we use semicolons to terminate statements, whereas Rust uses a semicolon when there's no expression following a statement.
