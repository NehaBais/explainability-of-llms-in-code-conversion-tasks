Below is your converted Python code in Java:

```java
import java.io.File;
import java.nio.file.Paths;

public class Main {

    public static void main(String[] args) {
        // Verify the size of a file called input.txt
        // for a file in the current working directory, 
        // and another one in the file system root.
        
        // Get the size of 'input.txt' in the current working directory
        long size1 = new File("input.txt") .length();

        // Get the size of '/input.txt' in the root directory of the file system
        String path = Paths.get("/input.txt").toString();
        int index = path.indexOf(':') + 1; 
        long size2 = new File(path.substring(index))).length();
        
        // Print the results
        System.out.println("Size of input.txt in current directory: " + size1);
        System.out.println("Size of /input.txt in root directory: " + size2);

    }
}
```
This Java code does exactly what your Python code does - it verifies the size of a file called `input.txt` for a file in the current working directory, and another one in the file system root.
