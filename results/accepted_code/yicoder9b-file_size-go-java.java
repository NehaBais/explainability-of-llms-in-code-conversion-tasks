import java.io.File;

public class Main {
  static void printFileSize(String f) {
    File file = new File(f);
    if (file.exists()) {
      System.out.println(file.length());
    } else {
      System.out.println("File does not exist");
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
