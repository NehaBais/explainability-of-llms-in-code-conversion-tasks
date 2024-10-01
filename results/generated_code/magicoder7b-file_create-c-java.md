 Below is the Java equivalent of your C code:

```java
import java.io.*;

public class Main {
   public static void main(String[] args) throws IOException {
       // Create a new empty file called "output.txt" of size 0 bytes in the current working directory
       FileOutputStream outputStream = new FileOutputStream("output.txt");
       outputStream.close();
       
       // Create an empty directory called "docs" in the filesystem root
       String path = "/docs";
       File dir = new File(path);
       if (!dir.exists()) {
           dir.mkdirs();
       }
   
       // Now, create a new file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory
       outputStream = new FileOutputStream("output.txt");
       outputStream.close();
       
       dir = new File(path);
       if (!dir.exists()) {
           dir.mkdirs();
       }
    }
}
```
Please note that in order to run this Java program, you need write permissions for the current working directory and the filesystem root. Also, remember that Java is a platform-independent language and it doesn't have direct equivalents of C system calls like `creat()`, so we use `FileOutputStream` here instead which creates a new file if one with the specified name does not exist already. For creating an empty directory, we directly use `mkdirs()` method of `java.io.File` class as there is no direct equivalent of mkdir() in Java.
