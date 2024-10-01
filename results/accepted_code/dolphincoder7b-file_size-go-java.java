import java.io.File;
import java.util.Objects;

class Main {
  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }

  private static void printFileSize(String f) {
    File file = new File(f);
    if (file.exists() && !file.isDirectory()) {
      System.out.println(Objects.requireNonNull(file).length());
    } else {
      System.err.println("File does not exist or is a directory");
    }
  }
}
