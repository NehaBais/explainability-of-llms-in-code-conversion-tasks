import java.io.*;
import java.nio.file.*;

public class FileSize {
  public static void main(String[] args) throws IOException {
    Path inputTxt = Paths.get("input.txt");
    if (Files.exists(inputTxt)) {
      System.out.println("Size of 'input.txt' in current directory: " + Files.size(inputTxt));
    } else {
      System.out.println("File 'input.txt' does not exist in the current directory.");
    }

    Path rootInputTxt = FileSystems.getDefault().getPath("/", "input.txt");
    if (Files.exists(rootInputTxt)) {
      System.out.println("Size of 'input.txt' in file system root: " + Files.size(rootInputTxt));
    } else {
      System.out.println("File 'input.txt' does not exist in the file system root.");
    }
  }
}
