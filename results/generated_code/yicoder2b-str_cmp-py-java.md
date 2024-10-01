The equivalent code in Java would look like this:

```java
public class Main {
    public static void main(String[] args) {
        comparator('YUP', 'YUP');
        comparator('BALL', 'BELL');
        comparator('24', '123');
        comparator(24, 123);
        comparator(5.0, 5);
    }

    public static void comparator(Object a, Object b) {
        System.out.println("
%s is of type %s and %s is of type %s" 
                       .formatted(a, a.getClass(), b, b.getClass()));
        if (a.hashCode() <  b.hashCode()) System.out.format('%s is strictly less than  %s%n', a, b);
        if (a.hashCode() <= b.hashCode()) System.out.format('%s is less than or equal to %s%n', a, b);
        if (a.hashCode() >  b.hashCode()) System.out.format('%s is strictly greater than  %s%n', a, b);
        if (a.hashCode() >= b.hashCode()) System.out.format('%s is greater than or equal to %s%n', a, b);
        if (a.equals(b))      System.out.format('%s is equal to %s%n', a, b);
        if (!a.equals(b))     System.out.format('%s is not equal to %s%n', a, b);
        if (a ==  b)         System.out.format('%s has object identity with %s%n', a, b);
        if (a !=  b)         System.out.format('%s has negated object identity with %s%n', a, b);
    }
}
```
This Java version uses the `formatted` method to print formatted strings without needing to format them separately. It also uses the `getClass()` method to get the class of an object and `hashCode()` and `equals()` methods for string comparison purposes. This is more strict than Python's comparison operations, which automatically convert non-string types to string before comparing them.
