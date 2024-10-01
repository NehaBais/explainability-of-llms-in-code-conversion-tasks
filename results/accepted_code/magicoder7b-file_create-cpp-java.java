import static java.nio.file.StandardCopyOption.REPLACE_EXISTING;

import java.io.File;
import java.nio.file.*;
import java.nio.file.attribute.PosixFilePermission;
import java.util.Set;

public class Main {
  public static void main(String[] args) throws Exception {
    // Create a new empty file called "output.txt" of size 0 bytes in the current working directory
    Files.createFile(Paths.get("output.txt"));

    // Create an empty directory called "docs" in the current working directory
    Files.createDirectory(Paths.get("docs"));

    // Do the same, but in the filesystem root ("/")
    Files.copy(new File(".").toPath(), new File("/", "output.txt").toPath(), REPLACE_EXISTING);

    Set<PosixFilePermission> perms = null;
    Files.createDirectory(Paths.get("/docs"), perms);
  }
}
