import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String err = "File move error";
    Path path1 = Paths.get("input.txt");
    Path path2 = Paths.get("output.txt");

    try {
      Files.move(path1, path2);
    } catch (IOException e) {
      System.out.println(err);
    }

    Path path3 = Paths.get("docs");
    Path path4 = Paths.get("mydocs");

    try {
      Files.move(path3, path4);
    } catch (IOException e) {
      System.out.println(err);
    }

    Path path5 = Paths.get("/input.txt");
    Path path6 = Paths.get("/output.txt");

    try {
      Files.move(path5, path6);
    } catch (IOException e) {
      System.out.println(err);
    }

    Path path7 = Paths.get("/docs");
    Path path8 = Paths.get("/mydocs");

    try {
      Files.move(path7, path8);
    } catch (IOException e) {
      System.out.println(err);
    }
  }
}
