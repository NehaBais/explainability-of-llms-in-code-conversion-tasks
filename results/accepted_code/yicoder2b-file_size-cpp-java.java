import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    printFileSize("input.txt");
    try {
      System.out.println();
      printFileSize(
          "/input.txt"); // this will throw an exception as the root directory is not accessible in
      // Java
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void printFileSize(String filename) throws IOException {
    Path path = Paths.get(filename);
    long size;
    try {
      size = Files.size(path);
      System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (IOException e) {
      throw new IOException(e.getMessage() + ": " + path, e);
    }
  }
}
