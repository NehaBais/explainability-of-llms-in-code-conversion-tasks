import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    Path path = Paths.get("./path/to/dir");
    Files.createDirectories(path);
  }
}
