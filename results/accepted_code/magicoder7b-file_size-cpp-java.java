import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }

  private static void printFileSize(String filename) throws IOException {
    try {
      long size = Files.size(Paths.get(filename));
      System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (IOException e) {
      System.err.println(e.getMessage());
    }
  }
}
