import java.io.File;

class Main {

  public static void printStat(String p) {
    File file = new File(p);
    if (file.exists()) {
      System.out.println(p + " exists");
      if (file.isDirectory()) System.out.println(p + " is a directory");
      else System.out.println(p + " is not a directory");
    } else System.out.println("File or directory does not exist: " + p);
  }

  public static void main(String[] args) {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
  }
}
