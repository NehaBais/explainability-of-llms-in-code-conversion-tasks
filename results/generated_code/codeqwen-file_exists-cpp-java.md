The following code converts the C++ code to Java:

```java
import java.io.File;

public class Main {

    static void fileExists(String path) {
        File f = new File(path);
        System.out.print(path);
        if (f.exists()) {
            if (f.isDirectory()) {
                System.out.println(" Is a directory");
            } else {
                System.out.println(" exists with a file size of " + f.length() + " bytes.");
            }
        } else {
            System.out.println(" does not exist");
        }
    }

    public static void main(String[] args) {
        fileExists("input.txt");
        fileExists("/zero_length.txt");
        fileExists("/docs/input.txt");
        fileExists("/docs/zero_length.txt");
    }
}
``` 

Please note that in Java, the File class provides methods to handle files and directories. The 'exists()' method checks whether a file exists, the 'isDirectory()' method checks if it is a directory and the 'length()' method returns the length of the file in bytes. Also, in Java, the path is represented as a string, so make sure that you provide the correct paths to your directories or files. In this case we use '/' for the root directory because the program runs in a Unix-like system (which uses slashes for paths). If it were running in Windows, the separator would be '\'.
