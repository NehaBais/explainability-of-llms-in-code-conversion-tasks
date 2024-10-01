import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileMove {
  public static void main(String[] args) throws Exception {
    // Rename "input.txt" in current working directory to "output.txt"
    File file = new File("input.txt");
    Files.move(file, new File("output.txt"));

    // Rename "c:/input.txt" to "c:/output.txt"
    Path path = Paths.get("c:/input.txt");
    Files.move(path, new File("c:/output.txt"));

    // Rename "docs" directory in current working directory to "mydocs"
    File docsDir = new File("docs");
    File myDocsDir = new File("mydocs");
    Files.move(docsDir, myDocsDir);

    // Rename "c:/docs" to "c:/mydocs"
    path = Paths.get("c:/docs");
    Files.move(path, new File("c:/mydocs"));
  }
}
