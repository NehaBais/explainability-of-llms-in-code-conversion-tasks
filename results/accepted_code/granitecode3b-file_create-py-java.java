import java.io.BufferedWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileCreator {

  public static void createFile(String directory, String fileName) throws Exception {
    Path path = Paths.get(directory, fileName);
    Files.createDirectories(path.getParent()); // Create the parent directory if it doesn't exist
    try (BufferedWriter writer = Files.newBufferedWriter(path)) {}
  }

  public static void main(String[] args) throws Exception {
    createFile(".", "output.txt"); // Create output.txt in the current directory
    createFile("/", "docs"); // Create docs/ subdirectory in the root directory
  }
}
