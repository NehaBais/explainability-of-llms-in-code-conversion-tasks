import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    rename("input.txt", "output.txt");
    rename("docs", "mydocs");

    // Assuming the current working directory is root (i.e., "/")
    rename("/input.txt", "/output.txt");
    rename("/docs", "/mydocs");
  }

  public static void rename(String oldName, String newName) {
    File oldFile = new File(oldName);
    File newFile = new File(newName);

    if (oldFile.renameTo(newFile)) { // If renaming was successful
      System.out.println("Renamed file " + oldName + " to " + newName);
    } else {
      System.out.println("Failed to rename file");
    }
  }
}
