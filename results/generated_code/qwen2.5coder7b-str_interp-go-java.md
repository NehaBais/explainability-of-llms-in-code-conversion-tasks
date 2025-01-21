Here is the equivalent code in Java:

```java
public class Main{
    public static void main(String[] args){
        String str = "Mary had a %s lamb";
        String txt = "little";
        String out = String.format(str, txt);
        System.out.println(out);
    }
}
```
In this Java code, we use the `String.format` method instead of Go's `fmt.Sprintf`. The `%s` in `str` is replaced by `txt` when we call `String.format`.
