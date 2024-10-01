import java.io.File;

public class Main {
  static void printStat(String path) {
    File file = new File(path);
    if (file.exists()) {
      if (file.isDirectory()) {
        System.out.println(path + " is a directory");
      } else {
        System.out.println(path + " Is a file");
      }
    } else {
      System.out.println(path + " does not exist");
    }
  }

  public static void main(String[] args) {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
  }
}
