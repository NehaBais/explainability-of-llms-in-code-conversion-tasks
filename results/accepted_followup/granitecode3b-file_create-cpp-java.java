import java.nio.file.Files;
import java.nio.file.Path;

public class FileManipulator {
  public static void main(String[] args) throws Exception {
    Files.createFile(Path.of("output.txt"));

    Path docsPath = Path.of("docs");
    Files.createDirectory(docsPath);
  }
}
