import java.io.File;

public class Main {
  public static void main(String[] args) {
    // for current working directory
    File file = new File("input.txt");
    if (file.exists() && !file.isDirectory()) { // Check to see if it's a file and not a directory
      file.renameTo(new File("output.txt"));
    }

    file = new File("docs");
    if (file.exists() && !file.isDirectory()) {
      file.renameTo(new File("mydocs"));
    }

    // for filesystem root
    file = new File("/input.txt");
    if (file.exists() && !file.isDirectory()) {
      file.renameTo(new File("/output.txt"));
    }

    file = new File("/docs");
    if (file.exists() && !file.isDirectory()) {
      file.renameTo(new File("/mydocs"));
    }
  }
}
