import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileSizeChecker {
  public static void main(String[] args) throws IOException {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }

  private static void printFileSize(String filename) throws IOException {
    long size = Files.size(Paths.get(filename));
    System.out.println("Size of file " + filename + " is " + size + " bytes.");
  }
}
