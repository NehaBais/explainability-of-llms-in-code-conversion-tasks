import java.io.File;

public class FileSizeChecker {
  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }

  public static void printFileSize(String filename) {
    try {
      long size = new File(filename).length();
      System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (Exception ex) {
      System.err.println(ex.getMessage());
    }
  }
}
