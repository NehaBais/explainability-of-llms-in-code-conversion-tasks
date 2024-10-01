import java.io.*;

public class RenameFileExample {
  public static void main(String[] args) {
    try {
      File file1 = new File("input.txt");
      File file2 = new File("output.txt");

      // rename file 1 to file 2
      if (file1.renameTo(file2)) {
        System.out.println("File rename successful");
      } else {
        System.out.println("File rename failed");
      }

      File dir1 = new File("docs");
      File dir2 = new File("mydocs");

      // rename directory 1 to directory 2
      if (dir1.renameTo(dir2)) {
        System.out.println("Directory rename successful");
      } else {
        System.out.println("Directory rename failed");
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
