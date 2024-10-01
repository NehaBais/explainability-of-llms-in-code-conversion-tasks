import java.io.File;
import java.io.IOException;

public class CreateDirectory {

  public static void main(String[] args) throws IOException {
    String dirName = "./path/to/dir";

    File newDir = new File(dirName);
    if (!newDir.exists()) {
      boolean isCreated = newDir.mkdirs();

      if (isCreated) System.out.println("Directory created successfully");
      else System.err.println("Failed to create directory");
    }
  }
}
