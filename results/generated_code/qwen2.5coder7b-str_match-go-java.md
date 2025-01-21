Here is the equivalent Java code for your Golang code:

```java
public class Main {

    public static void match(String first, String second) {
        System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));
        int index = first.indexOf(second);
        System.out.println("2. " + first + " contains " + second + ": " + (index >= 0));
        
        if (index >= 0) {
            System.out.println("2.1. at location " + index);
            
            while ((index = first.indexOf(second, index+1)) != -1) {
                System.out.println("2.2. at location " + index);
            }
            System.out.println("2.2. and that's all");
        }

        System.out.println("3. " + first + " ends with " + second + ": " + first.endsWith(second));
    }

    public static void main(String[] args) {
        match("abracadabra", "abr");
    }
}
```

This Java code will perform the same operations as your Golang code: it checks if the first string starts with or ends with the second string and whether the first string contains the second string. It also handles multiple occurrences of a substring in the first string.
