import java.io.*;

public class Main {
  static void printFileSize(String filename) {
    File file = new File(filename);
    if (file.exists()) {
      if (file.isFile()) {
        System.out.println(file.length() + " bytes");
      } else if (file.isDirectory()) {
        System.out.println(getDirSize(file) + " bytes");
      } else {
        System.out.println("Not a file or directory!");
      }
    } else {
      System.out.println(filename + " not found!");
    }
  }

  static long getDirSize(File dir) {
    long size = 0;
    for (File file : dir.listFiles()) {
      if (file.isFile()) {
        size += file.length();
      } else if (file.isDirectory()) {
        size += getDirSize(file);
      }
    }
    return size;
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }
}
