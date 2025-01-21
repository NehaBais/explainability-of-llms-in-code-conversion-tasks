import java.io.File;
import java.io.IOException;

public class Main {

  public static void printFileSize(String f) {
    File file = new File(f);
    try {
      System.out.println(file.length());
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
