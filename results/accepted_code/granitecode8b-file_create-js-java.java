import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileCreator {
  public static void main(String[] args) throws IOException {
    // Create a new empty file called "output.txt" of size 0 bytes in the current working directory
    Path path1 = Paths.get("output.txt");
    Files.createFile(path1);

    // Create a new empty file called "output.txt" of size 0 bytes in the filesystem root
    Path path2 = Paths.get("/");
    Path relativePath = path2.resolve("output.txt");
    Files.createFile(relativePath);

    // Create a new empty directory called "docs" in the current working directory
    Path docsDir1 = Paths.get("docs");
    Files.createDirectory(docsDir1);

    // Create a new empty directory called "docs" in the filesystem root
    Path docsDir2 = path2.resolve("docs");
    Files.createDirectory(docsDir2);
  }
}
