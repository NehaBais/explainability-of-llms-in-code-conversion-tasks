import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class Main {
  public static void main(String[] args) {
    try {
      createDirectoriesIfNotExists("/tmp/some/path/to/dir");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  public static void createDirectoriesIfNotExists(String pathString) throws IOException {
    Path path = java.nio.file.Paths.get(pathString);
    if (!Files.exists(path)) {
      Files.createDirectories(path);
    }
  }
}
