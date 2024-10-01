Here is the equivalent Java code for the given Rust program: 
```java
public class Main {
    public static void main(String[] args) {
        System.out.printf("Mary had a %s lamb\n", "little");
        // You can specify order using numbers
        System.out.printf("%2$s had a %1$s lamb\n", "little", "Mary");
        // Java does not have named arguments for printf
    }
}
```
Please note that the Rust version of string interpolation uses `{}` as placeholders and allows specifying order or named arguments. However, in java we do not have these features. In the java version, we use `%s` to indicate where a string should be inserted, which is then followed by an instance method (printf) which takes the full format string, plus any number of additional parameters, that will replace those placeholders within the string. 

The order is determined by the position of the parameter in the printf function, we use numbers to specify the order `%2$s` will be replaced with the second argument ("Mary") and `%1$s` will be replaced with the first argument ("little").
