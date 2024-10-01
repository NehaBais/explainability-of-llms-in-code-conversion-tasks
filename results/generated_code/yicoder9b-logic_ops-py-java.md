Here is the equivalent Java code for your Python function:

```Java
public class Main {
    public static void main(String[] args){
        logic(true, false);  // Testing with some values.
    }

    static void logic(boolean a, boolean b) {
        System.out.println("a and b: " + (a && b));
        System.out.println("a or b: " + (a || b));
        System.out.println("not a: " + !a);
    }
}
```

In Java, the logical operators are represented differently than in Python. The AND operator is `&&` instead of `and`, and the OR operator is `||` instead of `or`. The NOT operator is also a single character `!` instead of `not`.
