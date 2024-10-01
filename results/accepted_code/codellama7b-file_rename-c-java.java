import java.io.*;

public class CodeConversion {
  public static void main(String[] args) {
    // Rename a file called input.txt into output.txt in the current working directory
    rename("input.txt", "output.txt");

    // Rename a directory called docs into mydocs in the current working directory
    rename("docs", "mydocs");

    // Rename a file called /input.txt into /output.txt in the root of the filesystem
    rename("/input.txt", "/output.txt");

    // Rename a directory called /docs into /mydocs in the root of the filesystem
    rename("/docs", "/mydocs");
  }

  private static void rename(String oldName, String newName) {
    File file = new File(oldName);
    if (file.exists()) {
      file.renameTo(new File(newName));
    }
  }
}
