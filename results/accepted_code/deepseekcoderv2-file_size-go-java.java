import java.io.File;

public class Main {
  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }

  public static void printFileSize(String filePath) {
    File file = new File(filePath);
    if (!file.exists()) {
      System.out.println("File does not exist: " + filePath);
    } else {
      long size = file.length();
      System.out.println("Size of the file '" + filePath + "' is: " + size + " bytes");
    }
  }
}
