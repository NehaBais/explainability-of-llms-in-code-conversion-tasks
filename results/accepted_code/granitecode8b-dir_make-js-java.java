import static java.nio.file.StandardWatchEventKinds.*;

import java.io.IOException;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Mkdirp {
  public static void main(String[] args) throws IOException {
    Path path = Paths.get("./path/to/dir");
    createDirectory(path);
  }

  public static void createDirectory(Path path) throws IOException {
    if (Files.exists(path)) {
      return;
    }
    if (Files.notExists(path.getParent())) {
      createDirectory(path.getParent());
    }
    Files.createDirectory(path);
  }
}
