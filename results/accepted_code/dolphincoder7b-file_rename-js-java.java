import java.io.*;

public class Main {

  public static void main(String[] args) throws Exception {
    File file = new File("input.txt");
    if (file.exists()) file.renameTo(new File("output.txt"));

    File dir = new File("docs");
    if (dir.isDirectory() && dir.exists()) dir.renameTo(new File("mydocs"));
  }
}
