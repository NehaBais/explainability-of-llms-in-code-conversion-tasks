import java.io.File;

public class FileRenamer {
  public static void main(String[] args) {
    String errorMessage = "File move error";

    // In current working directory
    File file1 = new File("input.txt");
    File file2 = new File("output.txt");
    if (!file1.renameTo(file2)) {
      throw new RuntimeException(errorMessage);
    }

    File dir1 = new File("docs");
    File dir2 = new File("mydocs");
    if (!dir1.renameTo(dir2)) {
      throw new RuntimeException(errorMessage);
    }

    // In filesystem root
    File file3 = new File("/input.txt");
    File file4 = new File("/output.txt");
    if (!file3.renameTo(file4)) {
      throw new RuntimeException(errorMessage);
    }

    File dir3 = new File("/docs");
    File dir4 = new File("/mydocs");
    if (!dir3.renameTo(dir4)) {
      throw new RuntimeException(errorMessage);
    }
  }
}
