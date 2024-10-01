import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    Path path = Paths.get("input.txt");
    printFileSize(path);

    // For file in the root directory, you need to provide an absolute path like "/file.txt" or
    // "C:\\file.txt" depending on your OS
    path = Paths.get("/", "input.txt");
    printFileSize(path);
  }

  private static void printFileSize(Path file) throws IOException {
    try {
      long bytes = Files.size(file);
      System.out.println("The size of the file " + file + " is : " + bytes + " bytes");
    } catch (NoSuchFileException x) {
      System.err.format("%s: no such directory%n", file);
    } catch (IOException x) {
      // Some other sort of file error
      System.err.println(x);
    }
  }
}
