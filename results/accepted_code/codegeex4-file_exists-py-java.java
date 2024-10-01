import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    // For current working directory
    Path pathCurrent = Paths.get("input.txt");
    File fileCurrent = new File(pathCurrent.toString());
    System.out.println("File exists in current directory: " + fileCurrent.exists());

    Path dirPathCurrent = Paths.get("docs");
    File dirCurrent = new File(dirPathCurrent.toString());
    System.out.println("Directory exists in current directory: " + dirCurrent.exists());

    // For filesystem root
    Path pathRoot = Paths.get("/input.txt");
    File fileRoot = new File(pathRoot.toString());
    System.out.println("File exists in the root: " + fileRoot.exists());

    Path dirPathRoot = Paths.get("/docs");
    File dirRoot = new File(dirPathRoot.toString());
    System.out.println("Directory exists in the root: " + dirRoot.exists());
  }
}
