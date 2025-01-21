import java.io.File;

public class FileUtil {
  public static void mkdirp(String path) {
    File file = new File(path);
    if (!file.exists()) {
      if (file.mkdirs()) {
        System.out.println("Directory is created!");
      } else {
        System.out.println("Failed to create directory!");
      }
    }
  }
}
