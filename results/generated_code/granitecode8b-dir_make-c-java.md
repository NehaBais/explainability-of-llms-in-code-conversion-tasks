Here's the Java code that implements the same functionality as the given C code:
```java
import java.io.File;
public class Mkdirp {
 public static void main(String[] args) {
 if (args.length != 1) {
 System.out.println("usage: " + args[0] + " <path>");
 System.exit(1);
 }
 String path = args[0];
 File dir = new File(path);
 if (!dir.exists()) {
 Mkdirp.mkdirs(dir);
 }
 }
 public static void mkdirs(File directory) {
 if (directory.exists()) {
 return;
 }
 File parent = directory.getParentFile();
 if (parent != null) {
 Mkdirp.mkdirs(parent);
 }
 directory.mkdir();
 }
}
```
This Java code creates a directory and any missing parents by recursively calling the mkdirs() method on each segment of the path, starting from the root directory. The mkdirs() method first checks if the parent directory exists, and if not, it calls itself recursively with the parent directory as the argument. Once the parent directory is created, the mkdirs() method creates the current directory using the mkdir() method.

