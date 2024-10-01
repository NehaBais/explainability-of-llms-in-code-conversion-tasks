### Solution

```java
import java.io.File; 
public class Main {
    public static void main(String[] args) {
        String currentDir = System.getProperty("user.dir");
        String rootDirectory = "/"; // Root directory on UNIX systems, equivalent to 'C:\' in Windows
        
        File file1 = new File(currentDir + "/docs/input.txt");  // Assuming the input.txt is in a docs folder inside the current working directory
        System.out.println("File exists: " + file1.exists());
        
        File file2 = new File(rootDirectory + "docs/input.txt");  
        System.out.println("File exists: " + file2.exists());
    }
}
```
