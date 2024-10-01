Below is the equivalent Java code for your C++ code:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {

    public static void printFileSize(String filename) {
        try {
            long size = Files.size(Paths.get(filename)));
            System.out.println("Size of file " + filename + " is " + size + " bytes.");
        } catch (IOException ex) {
            System.err.println(ex.getMessage());
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```
This code does the same as your C++ code: it calculates and prints the size of "input.txt", which can be found both in the current working directory and in the file system root.
