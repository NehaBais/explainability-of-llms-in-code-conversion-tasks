import java.io.*;
import java.nio.file.Files;

public class MkdirAll {
  public static void main(String[] args) throws IOException {
    String path = "./path/to/dir";
    if (!Files.exists(Paths.get(path))) {
      Files.createDirectories(Paths.get(path));
    }
  }
}
