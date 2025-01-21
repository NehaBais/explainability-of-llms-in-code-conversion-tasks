import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    // Creating Path objects for input and docs directories
    Path inputPath = Paths.get("input.txt");
    Path docsPath = Paths.get("docs");

    try {
      // Checking if the file exists in the current working directory
      Files.exists(inputPath);
      System.out.println("File 'input.txt' exists in the current working directory.");

      // Checking if the file exists in the root directory
      Files.exists(inputPath, java.nio.file.StandardWatchService.class);
      System.out.println("File 'input.txt' exists in the root directory.");

      // Checking if the directory exists in the current working directory
      Files.isDirectory(docsPath);
      System.out.println("Directory 'docs' exists in the current working directory.");

      // Checking if the directory exists in the root directory
      Files.isDirectory(docsPath, java.nio.file.StandardWatchService.class);
      System.out.println("Directory 'docs' exists in the root directory.");

    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
