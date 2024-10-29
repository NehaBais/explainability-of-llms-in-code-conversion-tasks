In Java, you can use `StringBuilder` for manipulating strings effectively and efficiently. Here is how to modify your Golang code into equivalent Java code:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder("world!");
        s.insert(0, "Hello, ");
        System.out.println(s.toString()); // Output: Hello, world!
    }
}
```
In the above Java code, we create a `StringBuilder` object for your string and use its `insert()` method to prepend another string literal. The `insert()` function takes 2 parameters - the index at which you want to insert (in this case, `0`), and the actual text that you want to add ("Hello, ").

