Below is the equivalent Java code for your Python script:

```Java
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws IOException {
        create(".");  // current directory
        create("/"); // root directory, note: in Java we can't get filesystem root as easily because of security reason. This may throw an exception if you try to access it. You would have to run the program with sufficient privileges.
    }
    
    public static void create(String path) throws IOException {
        File file = new File(path, "output.txt");
        file.createNewFile();  // creates a new file called output.txt in specified location
        
        Files.createDirectories(Paths.get(path, "docs")); // creates a directory named 'docs' at the specified location if it does not exist already
    }
}
```
Note: Java uses forward slash (/) to separate path components no matter which operating system you are using. The method createNewFile() in File class will only create the file if it doesn't exist, so calling it twice has no effect. And Files.createDirectories(Path) from java.nio.file package is equivalent of os.mkdir() in Python.

