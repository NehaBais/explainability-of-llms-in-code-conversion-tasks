import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileCreator {
  public static void main(String[] args) throws IOException {
    Path currentDir = Paths.get("").toAbsolutePath();
    Path rootDir = Paths.get("/").toAbsolutePath();

    // Create file in current directory
    Path inputFile = currentDir.resolve("input.txt");
    Files.createFile(inputFile);
    System.out.println("File " + inputFile.toString() + " created!");

    // Create file in root directory
    Path rootInputFile = rootDir.resolve("input.txt");
    Files.createFile(rootInputFile);
    System.out.println("File " + rootInputFile.toString() + " created!");

    // Create directory in current directory
    Path docsDir = currentDir.resolve("docs");
    Files.createDirectory(docsDir);
    System.out.println("Directory " + docsDir.toString() + " created!");

    // Create directory in root directory
    Path rootDocsDir = rootDir.resolve("docs");
    Files.createDirectory(rootDocsDir);
    System.out.println("Directory " + rootDocsDir.toString() + " created!");
  }
}
