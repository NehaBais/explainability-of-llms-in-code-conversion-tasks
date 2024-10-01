```java
public class Main {
    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "little";
        String out = String.format(str, txt);
        System.out.println(out);
    }
}
```
In Java, string interpolation is achieved using the `String.format` method which takes a format string and an array of objects as arguments. The `%s` placeholder in the format string will be replaced by the string representation of each object in the array. In the given example, `str` is the format string and `txt` is the only element in the array.
