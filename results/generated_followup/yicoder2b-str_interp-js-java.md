The error occurs because `System.out.println` is part of the Java language, but it's not defined anywhere within the code provided. 

You can fix this by including a statement at the top of your file that defines `System`:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";
        String replaced = original.replace("X", little); //changes the original string
        System.out.println(replaced);
    }
}
```
This will output: "Mary had a little lamb" which is a replacement of "X" in the original string with 'little'.
