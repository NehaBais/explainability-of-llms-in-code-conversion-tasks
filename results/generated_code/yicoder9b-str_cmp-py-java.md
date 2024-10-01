Here is the Java equivalent of your Python code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println();
        compare("YUP", "YUP");
        System.out.println();
        compare("BALL", "BELL");
        System.out.println();
        compare("24", "123");
        System.out.println();
        compare(Integer.valueOf(24), Integer.valueOf(123));
        System.out.println();
        compare(Double.valueOf(5.0), Double.valueOf(5));
    }

    static void compare(Object a, Object b) {
        System.out.printf("%s is of type %s and %s is of type %s\n", 
                          a, a.getClass().getName(), b, b.getClass().getName());
        if (a instanceof Comparable && b instanceof Comparable) {  // check if both types are comparable
            Comparable<Object> ca = (Comparable<Object>) a;
            Comparable<Object> cb = (Comparable<Object>) b;
            if (ca.compareTo(cb) < 0)      System.out.printf("%s is strictly less than  %s\n", a, b);
            if (ca.compareTo(cb) <= 0)     System.out.printf("%s is less than or equal to %s\n", a, b);
            if (ca.compareTo(cb) > 0)      System.out.printf("%s is strictly greater than  %s\n", a, b);
            if (ca.compareTo(cb) >= 0)     System.out.printf("%s is greater than or equal to %s\n", a, b);
        } else {                             // if not comparable print this message
            System.out.println("Objects are not comparable");
        }   
        if (a.equals(b))     System.out.printf("%s is equal to %s\n", a, b);
        if (!a.equals(b))    System.out.printf("%s is not equal to %s\n", a, b);
        if (a == b)      System.out.printf("%s has object identity with %s\n", a, b);
        if (a != b)      System.out.printf("%s has negated object identity with %s\n", a, b);  
    }
}
```
