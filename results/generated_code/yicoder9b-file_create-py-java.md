Here is the Java equivalent of your Python code:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        create(".");  // current directory
        create("/");  // root directory
    }
    
    static void create(String directory) throws IOException {
        File file = new File(directory, "output.txt");
        file.createNewFile();
        new File(directory, "docs").mkdirs();
    }
}
```
This Java code creates an empty "output.txt" and a directory called "docs" in the specified directory just like your Python script does.
