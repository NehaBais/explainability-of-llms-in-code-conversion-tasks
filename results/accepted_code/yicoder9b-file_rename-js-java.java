import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Renaming a file in the current directory
    File oldfile = new File("input.txt");
    File newfile = new File("output.txt");
    if (oldfile.exists()) {
      boolean success = oldfile.renameTo(newfile);
      if (success) {
        System.out.println("Rename succeeded");
      } else {
        System.out.println("Rename failed");
      }
    }

    // Renaming a directory in the current directory
    File olddir = new File("docs");
    File newdir = new File("mydocs");
    if (olddir.exists()) {
      boolean success = olddir.renameTo(newdir);
      if (success) {
        System.out.println("Directory rename succeeded");
      } else {
        System.out.println("Directory rename failed");
      }
    }
  }
}
