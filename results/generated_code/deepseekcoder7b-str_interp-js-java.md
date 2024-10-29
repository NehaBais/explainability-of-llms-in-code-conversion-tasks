In Java, you can use `String.replace()` or `String.replaceAll()` methods to replace a substring in another string but they do not work like JavaScript's `str.replace(searchValue, replaceValue)` that returns a new string and leaves the original unaffected.

Java:
```java
public class Main {
    public static void main(String[] args){
        String original  = "Mary had a X lamb";
        String little = "big";
        
        // using replace method of String class in java
        String replaced = original.replace("X", little); 

        System.out.println(original);    // it will print: Mary had a X lamb
        System.out.println(replaced);   // it will print: Mary had a big lamb
    }
}
```
In Java, the method `replace()` returns a new string where some sequence of characters have been replaced by another sequence. The original String remains unchanged because strings in java are immutable. That's why we store the result in the 'replaced' variable and not in 'original'. In JavaScript you would normally use `str.replace(searchValue, replaceValue)` to achieve this functionality.

