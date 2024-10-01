Here is the Java code that implements the same functionality as the given C++ code:
```java
import java.io.File;
public class FileSizeChecker {
 public static void main(String[] args) {
 printFileSize("input.txt");
 printFileSize("/input.txt");
 }
 
 public static void printFileSize(String filename) {
 try {
 long size = new File(filename).length();
 System.out.println("Size of file " + filename + " is " + size + " bytes.");
 } catch (Exception ex) {
 System.err.println(ex.getMessage());
 }
 }
}
```
In this Java code, we first import the `java.io.File` class to access the file system. Then, in the `printFileSize` method, we create a new `File` object with the given filename and call its `length()` method to get the size of the file. If an exception occurs during the process, we catch it and print the error message to the console. Finally, in the `main` method, we call the `printFileSize` method twice to verify the size of both files.

