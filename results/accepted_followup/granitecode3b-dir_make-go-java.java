import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    Files.createDirectories(Paths.get("/tmp/some/path/to/dir"));
  }
}
