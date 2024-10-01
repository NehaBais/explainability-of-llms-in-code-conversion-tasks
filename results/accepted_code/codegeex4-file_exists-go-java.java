import java.io.File;

public class Main {
  public static void main(String[] args) {
    File currentDirectory = new File("");
    File rootDirectory = new File("/");

    printStat("input.txt", currentDirectory);
    printStat("/input.txt", currentDirectory);
    printStat("docs", currentDirectory);
    printStat("/docs", currentDirectory);

    printStat("input.txt", rootDirectory);
    printStat("/input.txt", rootDirectory);
    printStat("docs", rootDirectory);
    printStat("/docs", rootDirectory);
  }

  public static void printStat(String path, File directory) {
    File file = new File(directory, path);
    try {
      if (!file.exists()) {
        System.out.println(file.getPath() + " does not exist.");
      } else if (file.isDirectory()) {
        System.out.println(file.getPath() + " is a directory");
      } else {
        System.out.println(file.getPath() + " is a file");
      }
    } catch (SecurityException se) {
      System.out.println(se);
    }
  }
}
