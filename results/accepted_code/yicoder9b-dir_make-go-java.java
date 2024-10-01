import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    createDirectory("path/to/dir");
  }

  static void createDirectory(final String dir) throws Exception {
    Path path = Paths.get(dir);
    if (!Files.exists(path)) {
      Files.createDirectories(path);
    }
  }
}
