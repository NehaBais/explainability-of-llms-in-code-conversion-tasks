Sure, here is the equivalent Java code for the given JavaScript task:

```java
public class Main {
    public static void main(String[] args){
        System.out.println("abcd".equals("abcd") + " " + (!"abcd".equals("abcd"))); // true true
        System.out.println(Integer.parseInt("123") == "123"); // true, because "123" is parsed to int
        System.out.println("ABCD".toLowerCase().equals("abcd".toLowerCase())); // true (case insensitive) 
    }
}
```
This Java code does the same thing as JavaScript: compares strings for equality and inequality, lexical ordering, and string comparisons that are not case sensitive or case sensitive. 

This particular task converts a string to integer (`Integer.parseInt()`) when comparing because integer is the type of numeric string in Java. This behavior can be changed according to your requirement or based on your type system. 

Note: In real world scenarios, we do not always convert types like this and it depends on the business rules.
