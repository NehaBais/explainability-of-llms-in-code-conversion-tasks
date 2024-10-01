 In Java, you can use `StringBuilder` to append string literals in an idiomatic way. Below is the equivalent code snippet in Java:

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "Hello";
        StringBuilder sb = new StringBuilder(s1);
        sb.append(", World!");
        System.out.println(sb.toString());
    }
}
```
Here, `StringBuilder` is used as it provides more efficient operations compared to concatenating strings using the '+' operator in a loop or repeatedly calling String's methods like `concat()`. The `toString()` method is used to print out the final result since Java does not support implicit string concatenation. 

Also note that `print(s1);` is replaced by `System.out.println(sb.toString());` because this statement is more idiomatic in Java compared to JavaScript for outputting a value of variable.
