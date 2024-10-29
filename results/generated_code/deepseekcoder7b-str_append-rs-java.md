In Java, the equivalent code would be as follows:

```Java
public class Main {
    public static void main(String[] args) {
        String hello = "Hello world";
        
        // Append another string literal to hello.
        // This is done using `+` operator in Java.
        hello = hello + "!!!!!"; 
    
        System.out.println(hello);
    }
}
```
This code will output: "Hello world!!". The string literal "!!!!" is appended to the original string "Hello world". The result is then printed out using `System.out.println`. The equivalent of Rust's `push_str` method in Java, which can change a String object directly, doesn't exist in Java; instead we create a new String and assign it back to hello after appending the string literal "!!!!!!".

