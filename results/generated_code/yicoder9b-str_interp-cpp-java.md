Here is the equivalent Java code for your C++ program. Note that `replaceFirst` method in java is used instead of `replace` method in c++ to achieve the same functionality:

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
