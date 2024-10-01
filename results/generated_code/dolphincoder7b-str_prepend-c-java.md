### Pseudocode:

STR = "my String"
CSTR = "Changed "
new_str = CSTR + STR
print(new_str)

### Code
```java
public class Main {
    public static void main(String[] args) {
        // Define the string variable equal to any text value.
        String str = "my String";

        // Prepend the string variable with another string literal.
        String cstr = "Changed ";
        String newStr = cstr + str;

        // Print the result.
        System.out.println(newStr);
    }
}
```
