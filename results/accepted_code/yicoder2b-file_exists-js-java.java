import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws IOException {
    // Verify file in current working directory
    File file = new File("input.txt");
    if (!file.exists()) {
      System.out.println("File 'input.txt' does not exist.");
      return;
    }

    Path path = Paths.get(file.getAbsolutePath());
    System.out.printf(
        "Current working directory file '%s' exists: %b%n", file.getName(), Files.exists(path));

    // Verify file in root directory
    File rootDir = new File("/");
    if (!rootDir.exists()) {
      System.out.println("Root directory '/' does not exist.");
      return;
    }

    Path rootPath = Paths.get(rootDir.getAbsolutePath());
    File inputTxtInRootDir = new File("input.txt", "/docs");
    System.out.printf(
        "Root directory file '%s' exists: %b%n",
        inputTxtInRootDir.getName(),
        Files.exists(Paths.get(rootPath + File.separator + "input.txt")));
  }
}
