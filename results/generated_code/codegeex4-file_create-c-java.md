Below is the Java equivalent of your C code:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        try {
            File outputFile = new File("output.txt");
            if (!outputFile.createNewFile()) {
                System.out.println("Unable to create file 'output.txt'");
            }

            File docsDir = new File("docs");
            if (!docsDir.mkdir()) {
                System.out.println("Unable to create directory 'docs'");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```

This Java program creates an empty file named "output.txt" and an empty directory named "docs". The try-catch blocks are used for exception handling. If the creation of the file or directory fails, the program prints out a message.

The `createNewFile()` method creates a new file in the current working directory if it doesn't already exist and returns true; otherwise, it returns false and no action is taken. Similarly, `mkdir()` creates a directory in the current working directory if it doesn't already exist and returns true; otherwise, it returns false.

Please note that these operations won't be possible in root directory on most modern systems due to security restrictions.
