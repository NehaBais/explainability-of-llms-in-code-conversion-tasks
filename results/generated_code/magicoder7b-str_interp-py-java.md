 In Java, you can use String.format() method to do the interpolation of variables in a string. Here is how you would write that code:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String newStr = String.format("Mary had a %s lamb.", extra);
        System.out.println(newStr);
    }
}
```
When you run this code, it will output:

Mary had a little lamb.

