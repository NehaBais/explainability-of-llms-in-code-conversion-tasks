The error occurs because Java 14 introduced implicit class declaration. This is a preview feature that allows classes to be declared without using the 'class' keyword. However, by default, this feature is disabled for backwards compatibility reasons. To enable it, use the `--enable-preview` flag during compilation. 

```java
public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is  " + (a && b));
    System.out.println("a or b is  " + (a || b));
    System.out.println("not a is  " + (!a));
}
```
