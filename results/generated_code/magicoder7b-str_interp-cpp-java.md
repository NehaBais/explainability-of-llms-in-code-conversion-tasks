 In Java, you can use the `replaceFirst` method in the class `String`. This method replaces only the first occurrence of the specified pattern. Here is your C++ code converted to Java:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb.";
        String toBeReplaced = "X";
        String replacement = "little";
        
        String newString = original.replaceFirst(toBeReplaced, replacement);
        
        System.out.println("String after replacement: " + newString);
    }
}
```
The `replaceFirst` method takes two arguments: the first is the string you want to replace and the second one is the string that will replace it.
