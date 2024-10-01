```java
public class StringMatching {

    public static void match(String first, String second) {
        System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));
        int i = first.indexOf(second);
        System.out.println("2. " + first + " contains " + second + ": " + (i >= 0));
        if (i >= 0) {
            System.out.println("2.1. at location " + i);
            int start = i + 1;
            while ((i = first.indexOf(second, start)) >= 0) {
                System.out.println("2.2. at location " + i);
                start = i + 1;
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

