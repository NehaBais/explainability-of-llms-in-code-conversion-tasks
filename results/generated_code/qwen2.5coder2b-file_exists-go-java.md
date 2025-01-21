In Java, the equivalent code would look like this:

```java
package main;

import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        File file = new File("input.txt");
        if (file.exists() && file.isFile()) {
            System.out.println(file.getName() + " is a file");
        } else if (file.exists() && file.isDirectory()) {
            System.out.println(file.getName() + " is a directory");
        }

        File rootDir = new File("/");
        if (rootDir.exists() && rootDir.isDirectory()) {
            System.out.println(rootDir.getName() + " is a directory");
        } else if (rootDir.exists() && rootDir.isFile()) {
            System.out.println(rootDir.getName() + " is a file");
        }
    }
}
```
In this code, `File` class from Java library is used. This class has methods like `exists()` and `isFile()` which checks whether the directory or file exists and also whether it's a file or directory respectively.

The method `printStat` would be replaced with a loop to iterate over the files/directories in a specific path. However, this functionality isn't directly available in Java and you'd have to use `java.io.File.listFiles()` which returns an array of all files and directories in the specified path. 

Note: This piece of code will only work on Unix-based systems, as Java's File class doesn't exist for Windows. If your application needs to run on Windows systems too, you would need to add platform-specific logic to handle file system operations differently.
