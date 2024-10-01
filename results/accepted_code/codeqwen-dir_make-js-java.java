import java.io.File;
import java.util.function.Consumer;

public class Main {
  public static void main(String[] args) {
    String path = "./path/to/dir";
    mkdirp(path, System.out::println);
  }

  public static void mkdirp(String p, Consumer<String> cb) {
    File file = new File(p);

    if (!file.exists()) {
      boolean success = file.mkdirs();
      if (success) {
        cb.accept("Directory created");
      } else {
        cb.accept("Failed to create directory: " + p);
      }
    } else {
      cb.accept("Directory already exists");
    }
  }
}
