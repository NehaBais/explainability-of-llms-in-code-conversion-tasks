import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    try {
      mkdirp("./path/to/dir");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void mkdirp(String path) throws IOException {
    Path directory = Paths.get(path);
    Files.createDirectories(directory);
  }
}
