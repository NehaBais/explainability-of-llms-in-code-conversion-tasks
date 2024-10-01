import java.io.File;

public class Main {
  static void printFileSize(String filename) {
    try {
      File file = new File(filename);
      long size = file.length();
      System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
