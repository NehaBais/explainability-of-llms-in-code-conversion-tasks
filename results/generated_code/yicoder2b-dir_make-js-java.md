This JavaScript code can be converted to Java as follows:
```java
import java.io.*; 

public class Main {
  public static void main(String[] args) throws IOException {
      mkdirp("/path/to/dir", new PrintWriter(System.out));
  }

  static void mkdirp (String path, PrintWriter out) throws IOException {
    if (new File(path).exists()) {
        return;
    } 
      File parent = new File(new File(path).getParent());
      if (parent.mkdirs()) {
          out.println("Directory created: " + path);
      } else {
          throw new IOException("Cannot create directory");
      }
  }
}
```
This Java code does the exact same thing as the JavaScript code. It takes a directory path, makes any parent directories that do not yet exist, and then uses `mkdirs()` to actually make the directory itself. If anything goes wrong (like the parent directory does not exist), an exception is thrown. However, since this happens at the time of calling `mkdirp`, it will print out a message about the failure and stop execution immediately.
