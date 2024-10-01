import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;

public class Main {
  public static void main(String[] args) throws Exception {
    System.out.println(
        "Size of input.txt in current directory : "
            + Files.readAttribute(Paths.get("input.txt"), BasicFileAttributes::size));
    System.out.println(
        "Size of c:/input.txt : "
            + Files.readAttribute(Paths.get("c:\\input.txt"), BasicFileAttributes::size));
  }
}
