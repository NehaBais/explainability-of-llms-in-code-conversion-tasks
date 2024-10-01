In Java you can accomplish the same task with the following code. Java makes use of StringBuilder for mutable sequences of characters which is an efficient way to prepend strings:

```java
public class Main {
    public static void main(String[] args) {
        String str = "my String";
        String cstr = "Changed ";

        StringBuilder sb = new StringBuilder();
        sb.append(cstr);
        sb.append(str);

        System.out.println(sb.toString());
    }
}
```
