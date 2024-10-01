Sure! Here's the Java code that achieves the same result:
```java
import java.io.File;
public class Main {
 public static void main(String[] args) {
 File input = new File("input.txt");
 if (input.exists() && input.isDirectory()) {
 System.out.println("Input is a directory");
 } else {
 System.out.println("Input is not a directory");
 }
 
 File rootInput = new File("/");
 input = new File("/input.txt");
 if (input.exists() && input.isDirectory()) {
 System.out.println("Root input is a directory");
 } else {
 System.out.println("Root input is not a directory");
 }
 
 File docs = new File("docs");
 if (docs.exists() && docs.isDirectory()) {
 System.out.println("Docs is a directory");
 } else {
 System.out.println("Docs is not a directory");
 }
 
 rootInput = new File("/");
 docs = new File("/docs");
 if (docs.exists() && docs.isDirectory()) {
 System.out.println("Root docs is a directory");
 } else {
 System.out.println("Root docs is not a directory");
 }
 }
}
```
This code uses the `File` class to check if the file and directory exist using the `exists()` method and the `isDirectory()` method. The output will indicate whether the file or directory exists and is a directory or not.

