import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    // Creating an output file
    try {
      Path outputFile = Paths.get("output.txt");
      Files.createFile(outputFile);
      System.out.println("Output file created.");
    } catch (IOException e) {
      System.err.println(e.getMessage());
    }

    // Creating a directory
    try {
      Path docsDirectory = Paths.get("docs");
      Files.createDirectories(docsDirectory);
      System.out.println("Docs directory created.");
    } catch (IOException e) {
      System.err.println(e.getMessage());
    }
  }
}
