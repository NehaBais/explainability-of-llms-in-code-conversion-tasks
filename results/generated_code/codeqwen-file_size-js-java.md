Java does not have an equivalent to the JavaScript `ActiveXObject` to interact with the file system, so instead we can use Java's built-in `java.io.File` class to get the size of a file. Here is how you would implement it:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // Get the file from the current working directory
        File input1 = new File("input.txt");
        System.out.println("Size of input.txt: " + input1.length());

        // Get the file from the root directory
        File input2 = new File("/input.txt");
        System.out.println("Size of c:/input.txt: " + input2.length());
    }
}
```

This will print out the size of each file in bytes. The `/input.txt` path is based on Unix-style notation, which may not work if you're using Windows. If so, try using `C:/input.txt`.
