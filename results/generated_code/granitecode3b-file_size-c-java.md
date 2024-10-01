Here's the equivalent Java code for the given C code:
```
import java.io.File;
import java.nio.file.Files;
public class FileSize {
 public static void main(String[] args) throws Exception {
  File input = new File("input.txt");
  long size1 = input.length();
  System.out.println(size1);
  File rootInput = new File("/");
  long size2 = Files.size(rootInput.toPath().resolve("input.txt"));
  System.out.println(size2);
 }
}
```
This Java code uses the `File` class to get the file size for both the input file in the current working directory and the input file in the file system root. It then prints the sizes to the console using the `println` method.

