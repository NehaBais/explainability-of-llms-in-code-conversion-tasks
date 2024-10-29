import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    createDirWithMissingParents("/tmp/some/path/to/dir");
  }

  private static void createDirWithMissingParents(String path) {
    Path dir = Paths.get(path);

    try {
      Files.createDirectories(dir);
    } catch (IOException e) {
      System.err.println("Failed to create directory " + path);
      e.printStackTrace();
    }
  }
}
