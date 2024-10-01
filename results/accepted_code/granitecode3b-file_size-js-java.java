import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    long size1 = Files.size(Paths.get("input.txt"));
    long size2 = Files.size(Paths.get("/input.txt"));
    System.out.println("Size of input.txt in current directory: " + size1 + " bytes");
    System.out.println("Size of input.txt in file system root: " + size2 + " bytes");
  }
}
