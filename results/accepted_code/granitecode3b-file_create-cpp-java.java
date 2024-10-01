import java.io.fstream;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;

public class FileManipulator {
  public static void main(String[] args) throws Exception {
    try (fstream f = new fstream("output.txt", true)) {}
    Files.createFile(FileSystems.getDefault().getPath("output.txt"));

    Path docsPath = FileSystems.getDefault().getPath("docs");
    Files.createDirectory(docsPath);
  }
}
