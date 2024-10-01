import java.nio.file.Files;
import java.nio.file.Paths;

public class FileSize {

  public static void printFileSize(String filename) {
    try {
      long size = Files.size(Paths.get(filename));
      System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (Exception e) {
      System.err.println(e.getMessage());
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
