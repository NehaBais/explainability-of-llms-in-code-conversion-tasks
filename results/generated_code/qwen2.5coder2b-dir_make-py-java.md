The equivalent code in Java would be:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        String path = "./path/to/dir";
        try {
            File file = new File(path);
            if (!file.exists()) {
                if (!file.mkdirs()) { // Creates the directory and any missing parent directories.
                    throw new Exception("Directory could not be created.");
                }
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
```
The above code creates a file object of the given path and checks if it exists. If it does not exist, it tries to create the directory using the `mkdirs()` method which creates all directories in the specified path that do not already exist. 

Please note that this will only work on Unix-like operating systems (like Linux or MacOS). The Windows version of mkdirp will not work the same way due to differences in the directory creation and permissions model.

If you need cross-platform support, you would likely have to use a library that provides similar functionality, such as Apache Commons IO or Guava.
