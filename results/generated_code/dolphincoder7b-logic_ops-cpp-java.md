### Pseudocode:
print_logic(bool a, bool b):
    print("a and b is ", a && b);
    print("a or b is ", a || b);
    print("not a is ", not a);

### Code snippet:
```java
public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + (!a));
}
```

### Code explanation:
- `System.out` is a reference to the standard output stream, which can be used to write data and messages to it.
- `(a && b)` calculates the boolean value of 'and' operation between two boolean values a and b and `a || b` does for 'or'. The boolean operator `&&` checks whether both operands are true (non-zero) and if yes, returns true, otherwise false; while the operator `||` returns true if either one or both operands is true.
- `!a` calculates the boolean value of 'not' operation on a single boolean value a and `System.out.println("not a is " + (!a)` prints it out with a space and 'not'.
