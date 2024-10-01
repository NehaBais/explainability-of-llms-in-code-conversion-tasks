In Java, string interpolation is not directly supported in the standard libraries. It can be achieved using `String.format()` method. Here is how it looks like:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";

        // replace 'X' with the value of little
        String replaced = String.format("%s had a %s lamb", original, little);
        
        System.out.println(replaced);
    }
}
```

In this program, `String.format()` method is used to replace "X" in the string with the value of 'little' variable. The result of this operation is stored in the 'replaced' variable which then gets printed on console.
