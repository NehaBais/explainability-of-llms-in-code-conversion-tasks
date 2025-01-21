import java.io.File;

public class Main {
  public static void printFileSize(String f) {
    File file = new File(f);
    System.out.println(file.exists() ? file.length() : -1);
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
