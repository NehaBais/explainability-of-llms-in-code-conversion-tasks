import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    try {
      createDirectoryAndParents("./path/to/dir");
    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public static void createDirectoryAndParents(String path) throws IOException {
    Path directory = Paths.get(path);

    if (!Files.exists(directory)) {
      Files.createDirectories(directory);
    }
  }
}
