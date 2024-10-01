import java.io.IOException;
import java.nio.file.*;

public class Main {
  static void printFileSize(String filename) {
    try {
      long size = Files.size(Paths.get(filename));
      System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (IOException ex) {
      ex.printStackTrace();
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
