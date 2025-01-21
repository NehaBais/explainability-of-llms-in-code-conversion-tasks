import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    Path path1 = Paths.get(".", "output.txt");
    Files.write(path1, "".getBytes(), StandardOpenOption.CREATE);

    // Assuming the file system root to be '/' for simplicity
    // This won’t work on a typical Windows machine as you can’t write files at root level in java
    Path path2 = Paths.get("/", "output.txt");
    Files.write(path2, "".getBytes(), StandardOpenOption.CREATE);

    Path dir1 = Paths.get(".", "docs");
    Files.createDirectories(dir1);

    // Corrected 'Paths' method as per the fix provided above
    Path dir2 = Paths.get("/", "docs");
    Files.createDirectories(dir2);
  }
}
