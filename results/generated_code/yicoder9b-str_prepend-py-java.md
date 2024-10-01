Here is the equivalent Java code for your Python program. 

Java doesn't have a specific command or operator to prepend something to an existing string, so you can simply use the "+" operator in order to concatenate the new string with the original one:
```java
public class Main {
    public static void main(String[] args) {
        String s = "12345678";
        s = "0" + s;  // by concatenation
        System.out.println(s);
    }
}
```
