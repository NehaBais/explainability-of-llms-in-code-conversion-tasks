```java
public class StringInterpolation {

    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "little";

        String out = String.format(str, txt);

        System.out.println(out);
    }
}
```
