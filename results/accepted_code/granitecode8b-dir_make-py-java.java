import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class DirectoryCreator {
  public static void mkdirp(String path) {
    Path directory = Paths.get(path);
    if (directory.toFile().exists()) {
      return;
    }
    try {
      Files.createDirectories(directory);
    } catch (Exception e) {
      throw new RuntimeException("Failed to create directory: " + e.getMessage());
    }
  }

  public static void main(String[] args) {
    mkdirp("./path/to/dir");
  }
}
