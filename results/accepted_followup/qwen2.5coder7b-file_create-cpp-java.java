import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws IOException {
    // Create an empty file called "output.txt" in the current working directory and filesystem root
    createEmptyFile("output.txt");
    createEmptyFile("/output.txt");

    // Create an empty directory called "docs" in the current working directory and filesystem root
    createDirectory("docs");
    createDirectory("/docs");
  }

  private static void createEmptyFile(String fileName) throws IOException {
    File file = new File(fileName);
    if (file.createNewFile()) {
      System.out.println("File created: " + fileName);
    } else {
      System.out.println("File already exists.");
    }
  }

  private static void createDirectory(String directoryName) throws IOException {
    Path path = Paths.get(directoryName);
    if (!Files.exists(path)) {
      Files.createDirectories(path);
      System.out.println("Directory created: " + directoryName);
    } else {
      System.out.println("Directory already exists.");
    }
  }
}
