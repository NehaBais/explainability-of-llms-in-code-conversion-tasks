In Java, you can use the java.nio.file and java.io packages to get file size. Please note that for security reasons, accessing files in the root directory may not be allowed depending on your operating system's settings.

Here is how this C++ code can be translated into Java: 
```java
import java.nio.file.*;
import java.io.IOException;

public class Main {
    static void printFileSize(String filename) {
        try {
            long size = Files.size(Paths.get(filename));
            System.out.println("Size of file " + filename + " is " + size + " bytes.");
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```
