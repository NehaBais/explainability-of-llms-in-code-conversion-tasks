Sure, here is the equivalent Java code for your C++ requirement:

```java
import java.io.*;

public class Main {
  
    public static void main(String[] args) throws IOException {
        // Create a file "output.txt" with size 0
        FileOutputStream fos = new FileOutputStream("output.txt");
        fos.close();
        
        // Creating directory "docs" in current working directory
        File dir = new File("docs");
        dir.mkdir();
        
        // Creating directory "/docs" in filesystem root
        File file = new File("/docs");
        file.mkdirs();
    }
}
``` 
Please note that in Java, the way to create a directory at a specific location (not just a specific path) would be to call it with a File object that contains your desired absolute path instead of using "/" character and directly calling mkdir or mkdirs.
