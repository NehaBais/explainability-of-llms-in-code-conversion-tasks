import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws IOException {
    Path fPath = Paths.get(".");
    Path dPath = Paths.get(".", "docs");

    if (!Files.exists(dPath)) {
      Files.createDirectories(dPath);
    }

    if (!Files.exists(fPath)) {
      Files.createFile(fPath);
    }

    Files.move(fPath, dPath.resolve(FILE_NAME));
  }
}
