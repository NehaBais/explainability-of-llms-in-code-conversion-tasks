The equivalent code in Java would be:

```java
public class Main {
    public static void main(String[] args){
        match("abracadabra", "abr");
    }

    static void match(String first, String second) {
        System.out.println(first + " starts with " + second + ": " + (first.startsWith(second)));
        int index = first.indexOf(second);
        System.out.println(first + " contains " + second + ": " + (index >= 0));
        if (index >= 0) {
            for (int i = index+1;;){
                int nextIndex = first.indexOf(second, i);
                if (nextIndex < 0) break;
                System.out.println("Found " + second + " at location " + (i = nextIndex));
                i = nextIndex + 1;
            }
            System.out.println(second + " and that's all");
        }
        System.out.println(first + " ends with " + second + ": " + first.endsWith(second));
    }
}
```
This Java code accomplishes the same task as your Golang code. It provides functions to check if a string starts or ends with another, and if it contains another one at any location within it. If there are multiple occurrences of the second string in the first string, it will print out each occurrence's starting index along with that particular string.
