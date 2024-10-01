import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    new File("output.txt").createNewFile();
    new File("/output.txt").createNewFile();
    new File("docs/").mkdirs(); // If directory does not exist, create it
    new File("/docs/").mkdirs(); // Create a directory in the root
  }
}
