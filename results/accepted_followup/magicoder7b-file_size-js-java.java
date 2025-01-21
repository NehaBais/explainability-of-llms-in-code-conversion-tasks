import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    System.out.println(
        "Size of input.txt in current directory : " + Files.size(Paths.get("input.txt")));
    System.out.println("Size of c:/input.txt : " + Files.size(Paths.get("c:\\input.txt")));
  }
}
