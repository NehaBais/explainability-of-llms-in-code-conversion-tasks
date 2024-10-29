Here is the Java equivalent of your C++ code. The standard library string operations are replaced with their respective methods from java.lang.String class:

```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s + " literal");
        
        String s2 = s + " literal";
        System.out.println(s2);
    }
}
```
This Java code does the same thing as your C++ code: it defines two strings, prints them to standard output, and then concatenates one string with another before printing that result. Note that in this context "<<" operator is replaced by "+" for string concatenation in Java. 

The equivalent of `std::cout` from C++ in Java is `System.out.println()` function used to print the output. In java, `std::endl` is also available as `System.lineSeparator()`. Also note that the syntax for defining a variable and concatenating strings has changed slightly between C++ and Java due to their differing programming paradigms and standard libraries.

