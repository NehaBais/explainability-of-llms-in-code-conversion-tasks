The error occurs because Java 13 introduced an experimental feature known as Implicit Class Declaration, which is disabled by default. This means that when we use "boolean" instead of "int", it will no longer be considered as a primitive type and might lead to runtime errors.

To fix this issue, you can enable the preview feature using the "--enable-preview" flag during compilation or include the "-Xlint:preview" option in the Java compiler options. This allows the use of "boolean" variables without causing any issues when compiling with a modern version of Java.

Here is the corrected code:
```java
void print_logic(boolean a, boolean b) {
    System.out.printf("a and b is %s%n", a && b);
    System.out.printf("a or b is %s%n", a || b);
    System.out.printf("not a is %s%n", !a);
}
```
