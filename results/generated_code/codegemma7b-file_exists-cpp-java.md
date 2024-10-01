```java
import java.io.File;

public class FileExists {

    public static void fileExists(String path) {
        File file = new File(path);
        System.out.println(path);
        if (file.exists()) {
            if (file.isDirectory()) {
                System.out.println(" is a directory");
            } else {
                System.out.println(" exists with a file size of " + file.length() + " bytes.");
            }
        } else {
            System.out.println(" does not exist");
        }
    }

    public static void main(String[] args) {
        fileExists("input.txt");
        fileExists("zero_length.txt");
        fileExists("docs/input.txt");
        fileExists("docs/zero_length.txt");
    }
}
```

**Explanation:**

- The `fileExists()` method takes a file path as input and uses the `File` class to check if the file exists.
- It then prints the path and information about the file, such as whether it is a directory or a file, and its size.
- In the `main()` method, we call the `fileExists()` method for four different file paths:
    - `input.txt` (in the current working directory)
    - `zero_length.txt` (in the current working directory)
    - `docs/input.txt` (in a directory called `docs` in the current working directory)
    - `docs/zero_length.txt` (in a directory called `docs` in the current working directory)
