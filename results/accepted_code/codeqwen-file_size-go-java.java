import java.io.File;

public class Main {
  static void printFileSize(String f) {
    File file = new File(f);
    if (file.exists()) {
      long sizeInBytes = file.length();
      System.out.println(sizeInBytes);
    } else {
      System.err.println("The file does not exist.");
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
