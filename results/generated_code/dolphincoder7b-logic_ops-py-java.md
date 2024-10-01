This is the equivalent Java code:
```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Output:");
        logic(true, false);
    }

    private static void logic(boolean a, boolean b) {
        String resultAAndB = Boolean.toString(a && b);
        String resultAOrB = Boolean.toString(a || b);
        String resultNotA = Boolean.toString(!a);

        System.out.println("a and b: " + resultAAndB);
        System.out.println("a or b: " + resultAOrB);
        System.out.println("not a: " + resultNotA);
    }
}
```
