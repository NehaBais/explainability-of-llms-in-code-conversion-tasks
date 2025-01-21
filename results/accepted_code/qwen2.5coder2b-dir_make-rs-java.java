import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    String dirPath = "./path/to/dir";
    try {
      Files.createDirectories(Paths.get(dirPath));
    } catch (IOException e) {
      System.err.println("An Error Occured: " + e.getMessage());
    }
  }
}
