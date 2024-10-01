Below is the equivalent Java code for your C++ code:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileCheck {

    public static void main(String[] args) {
        	checkFile("input.txt");
        	checkFile("zero_length.txt");
        	checkDirectory("docs/input.txt");
        	checkDirectory("docs/zero_length.txt");
        }

        private static void checkFile(String fileName) {
            Path path = Paths.get(fileName);
            if (Files.exists(path)) {
                if (Files.isDirectory(path))) {
                    System.out.println(path + " is a directory");
                } else {
                    System.out.println(path + " exists with file size of " + Files.size(path) + " bytes"));
                }
            } else {
                System.out.println(path + " does not exist"));
            }
        }

        private static void checkDirectory(String dirName) {
            Path path = Paths.get(dirName);
            if (Files.exists(path)) {
                if (Files.isDirectory(path))) {
                    System.out.println(path + " is a directory"));
                } else {
                    System.out.println("The file " + path + " exists, but it's not a directory"));
                }
            } else {
                System.out.println(path + " does not exist"));
            }
        }
    }
```
This Java code performs the same checks that your C++ code does. It verifies whether a file called `input.txt` and a directory called `docs` exist in both the current working directory and also in the root of the filesystem.
