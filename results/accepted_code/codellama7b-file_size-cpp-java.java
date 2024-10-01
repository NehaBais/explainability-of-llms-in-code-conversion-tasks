import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class FileSize {
  public static void main(String[] args) throws IOException {
    Path inputFile = Paths.get("input.txt");
    long size = Files.size(inputFile);
    System.out.println("Size of file " + inputFile + " is " + size + " bytes.");
  }
}
