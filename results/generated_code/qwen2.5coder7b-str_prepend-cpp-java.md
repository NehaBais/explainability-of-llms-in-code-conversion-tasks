Here is the equivalent code in Java:

```java
public class Main {
    public static void main(String[] args) {
        String myStrings[] = {"prepended to", "my string"};
        String prepended = "";
        for (String str : myStrings) {
            prepended += str;
        }
        System.out.println(prepended);
    }
}
```

The code uses an array of strings instead of a vector, and loops over the elements using a for-each loop to concatenate them. The `+=` operator is used for string concatenation in Java. Finally, it prints the concatenated string to the console.
