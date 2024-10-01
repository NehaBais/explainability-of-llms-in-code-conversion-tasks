Sure, here's the Java code that achieves the same result:
```java
import java.io.File;
public class FileChecker {
 
 public static void main(String[] args) {
 File inputFile = new File("input.txt");
 File docDir = new File("docs");
 
 System.out.println("Input file exists: " + inputFile.exists());
 System.out.println("Docs directory exists: " + docDir.exists());
 }
}
``` 
This code creates two `File` objects representing the input file and the docs directory, and then uses the `exists()` method to check if they exist. The output will indicate whether the input file and the docs directory exist or not.

