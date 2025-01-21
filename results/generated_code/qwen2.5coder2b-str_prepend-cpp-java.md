Sure, here is the equivalent Java code:

```java
public class Main {
    public static void main(String[] args) {
        // Create an array of strings.
        String[] myStrings = {"prepended to", "my string"};
        
        // Use String.join() method to join all elements in the array with a space.
        String prepended = String.join(" ", myStrings);
        
        // Print the result.
        System.out.println(prepended);
    }
}
```

The `String.join()` method concatenates the elements of an array into a single string, where each element is separated by a specified delimiter. In this case, we use a space as the delimiter.
