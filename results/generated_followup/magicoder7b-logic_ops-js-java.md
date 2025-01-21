 The error is because of the new feature introduced in Java 14 known as implicitly declared classes which allows for function expressions to be used, without creating an explicit class for them. This feature is currently disabled by default and needs to be enabled using the command line argument --enable-preview. It is also important to mention that this feature is still a preview and may not work correctly or be supported in future versions of Java.

The corrected code:
```java
public void logic(boolean a, boolean b) {
  System.out.println("a AND b: " + (a && b));
  System.out.println("a OR b: " + (a || b));
  System.out.println("NOT a: " + !a);
}
```
