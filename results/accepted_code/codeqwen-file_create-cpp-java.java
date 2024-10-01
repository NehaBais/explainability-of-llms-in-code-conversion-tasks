import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File f = new File("output.txt");
    f.createNewFile();

    Path dir = Paths.get("/docs");
    Files.createDirectories(dir);

    // for the current working directory, you can use:
    // Files.createDirectory(Paths.get("docs"));
  }
}
