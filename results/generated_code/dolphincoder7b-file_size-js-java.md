This code can be converted to Java as follows:
```
import java.io.*;
public class Main {
    public static void main(String[] args) {
        File file = new File("input.txt");
        System.out.println("File Size (in bytes): " + file.length());
        
        File rootFile = new File("/input.txt");
        if(rootFile.exists()) {
            System.out.println("Root File Size (in bytes): " + rootFile.length());
        }
    }
}
```
In this Java program, we use the `java.io.File` class to represent a file and obtain its size in bytes using the `File.length()` method. The code also checks if a file named `/input.txt` exists and prints its size in bytes if it does.
