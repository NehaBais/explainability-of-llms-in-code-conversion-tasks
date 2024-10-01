import java.io.File;

public class Main {

  public static void printFileSize(String filePath) {
    File file = new File(filePath);
    if (!file.exists()) {
      System.out.println("The file " + filePath + " does not exist.");
    } else {
      long fileSize = file.length();
      System.out.println("The size of the file " + filePath + " is " + fileSize + " bytes.");
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
