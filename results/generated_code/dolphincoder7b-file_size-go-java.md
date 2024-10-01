Here is the Java equivalent of your Golang code:

```java
import java.io.File;
import java.util.Objects;

class Main {
    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }

    private static void printFileSize(String f)  {
        File file = new File(f);
        if (file.exists() && !file.isDirectory()) {
            System.out.println(Objects.requireNonNull(file).length());
        } else {
            System.err.println("File does not exist or is a directory");
        }
    }
}
```
The `main` function calls the `printFileSize` method twice, once with "input.txt" as the file path and another time with "/input.txt".
The `printFileSize` method first constructs a new Java File object with the given path (which can be absolute or relative). It then checks whether the file exists and isn't a directory using the `exists()` and `isDirectory()` methods of the file object. If both conditions are true, it prints the length of the file (in bytes) to standard output using the `length()` method. Otherwise, it prints an error message to standard error.
Note that Java's File class is used instead of Go's os.Stat function because this version only needs to check whether a file exists or not without getting information about its size, and the File class provides a more straightforward way to do that.
