import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File source = new File("input.txt");
    if (source.exists()) {
      File dest = new File("output.txt");
      dest.renameTo(new File("output.txt"));
    } else if (new File("c:/input.txt").exists()) {
      File dest = new File("c:/output.txt");
      dest.renameTo(new File("c:/output.txt"));
    }

    File sourceDir = new File("docs");
    if (sourceDir.exists()) {
      File destDir = new File("mydocs");
      destDir.renameTo(new File("mydocs"));
    } else if (new File("c:/docs").exists()) {
      File destDir = new File("c:/mydocs");
      destDir.renameTo(new File("c:/mydocs"));
    }
  }
}
