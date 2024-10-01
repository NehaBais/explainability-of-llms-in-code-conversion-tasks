import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void mkdirp(String path) throws IOException {
    Files.createDirectories(Paths.get(path));
  }

  public static void main(String[] args) {
    try {
      mkdirp("./path/to/dir");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
