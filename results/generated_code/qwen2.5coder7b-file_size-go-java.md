Here is the equivalent code in Java:

```java
import java.io.File;
import java.io.IOException;

public class Main {

    public static void printFileSize(String f) {
        File file = new File(f);
        try {
            System.out.println(file.length());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```

This Java program does the same thing as your Go program. It prints the size of a file named `input.txt` and another one in the root directory (`/`). The `File.length()` method is used to get the length (size) of the file, and any exceptions are caught and printed using the `printStackTrace()` method.
