import java.io.File;

public class Main {
  public static void main(String[] args) {
    renameFile("input.txt", "output.txt");
    renameDirectory("docs", "mydocs");
    renameFile("/", "input.txt", "output.txt");
    renameDirectory("/", "docs", "mydocs");
  }

  private static void renameFile(String source, String destination) {
    File file = new File(source);
    file.renameTo(new File(destination));
  }

  private static void renameDirectory(String source, String destination) {
    File directory = new File(source);
    directory.renameTo(new File(destination));
  }
}
