import java.io.File;

public class RenameFiles {
  public static void main(String[] args) {
    // In current working directory
    File file1 = new File("input.txt");
    File file2 = new File("output.txt");
    if (file1.exists() && !file2.exists()) {
      file1.renameTo(file2);
    }

    File dir1 = new File("docs");
    File dir2 = new File("mydocs");
    if (dir1.exists() && !dir2.exists()) {
      dir1.renameTo(dir2);
    }

    // In filesystem root
    File file3 = new File("/input.txt");
    File file4 = new File("/output.txt");
    if (file3.exists() && !file4.exists()) {
      file3.renameTo(file4);
    }

    File dir3 = new File("/docs");
    File dir4 = new File("/mydocs");
    if (dir3.exists() && !dir4.exists()) {
      dir3.renameTo(dir4);
    }
  }
}
