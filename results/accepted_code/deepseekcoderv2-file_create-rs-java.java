import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class Main {
  public static void main(String[] args) throws IOException {
    create(".");
    create("/");
  }

  private static boolean create(String root) throws IOException {
    List<File> files = new ArrayList<>();
    File dir = new File(root);

    // Check if the directory exists and is a directory
    if (!dir.exists() || !dir.isDirectory()) {
      System.out.println("Invalid Directory");
      return false;
    }

    String fileToCreate1 = root + "/output.txt";
    File f1 = new File(fileToCreate1);
    if (f1.createNewFile()) {
      System.out.println("File " + f1.getName() + " created successfully.");
      files.add(f1);
    } else {
      System.out.println("File already exists");
    }
    String dirToCreate = root + "/docs";
    File d1 = new File(dirToCreate);
    if (d1.mkdir()) {
      System.out.println("Directory " + d1.getName() + " created successfully.");
      files.add(d1);
    } else {
      System.out.println("Failed to create directory");
    }
    return true;
  }
}
