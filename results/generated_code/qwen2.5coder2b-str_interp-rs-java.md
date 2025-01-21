To convert the given Rust code to Java, we can use String.format(). Here's how it would look:

```java
public class Main {
    public static void main(String[] args) {
        // Define variables or values
        String adjective = "little";
        
        // Print using variable and format method
        System.out.println("Mary had a %s lamb".formatted(adjective));
        System.out.println("%s had a %s lamb", adjective, "Mary");
        System.out.printf("%s had a %s lamb%n", adjective, "Mary");
    }
}
```
In this Java code, we first define the variable `adjective` with the value "little". Then, we use the format method (`%s`) to insert the value of `adjective` into the placeholders in the string. The format method is used here for simplicity and to ensure that all placeholders are replaced by their corresponding values without needing named parameters as in Rust.
