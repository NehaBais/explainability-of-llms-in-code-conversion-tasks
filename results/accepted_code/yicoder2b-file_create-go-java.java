import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    Files.createFile(Paths.get("input.txt"));
    Files.createDirectories(Paths.get("/", "docs"));
  }
}
