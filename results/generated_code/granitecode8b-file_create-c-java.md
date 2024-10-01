Here is the converted code from C to Java:
```
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
public class Main {
 public static void main(String[] args) throws IOException {
  Path cwd = Paths.get("."); // current working directory
  Path root = Paths.get("/"); // filesystem root
  String filename = "output.txt";
  String dirname = "docs";

  // Create an empty file called "output.txt" in the current working directory
  File outputFile = new File(cwd.toFile(), filename);
  Files.createFile(outputFile.toPath());

  // Create an empty directory called "docs" in the current working directory
  File outputDir = new File(cwd.toFile(), dirname);
  Files.createDirectory(outputDir.toPath());

  // Create an empty file called "output.txt" in the filesystem root
  File outputFileRoot = new File(root.toFile(), filename);
  Files.createFile(outputFileRoot.toPath());

  // Create an empty directory called "docs" in the filesystem root
  File outputDirRoot = new File(root.toFile(), dirname);
  Files.createDirectory(outputDirRoot.toPath());
 }
}
```
Note that in Java, you need to specify the full path including the filename and directory name for creating a file or directory in the filesystem. Also, the permissions are specified using octal numbers instead of symbolic notation as used in C.

