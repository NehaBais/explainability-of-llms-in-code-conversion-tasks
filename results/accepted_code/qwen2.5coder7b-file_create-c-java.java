import java.io.File;
import java.io.IOException;

public class CreateFileAndDirectory {
  public static void main(String[] args) {
    try {
      // Current Working Directory
      createFileAndDirectory(new File("./output.txt"), new File("./docs"));

      // Filesystem Root
      // Note: Writing to the filesystem root typically requires administrative privileges.
      createFileAndDirectory(new File("/output.txt"), new File("/docs"));
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void createFileAndDirectory(File file, File directory) throws IOException {
    // Create or truncate the file
    if (!file.createNewFile()) {
      System.out.println("Failed to create file: " + file.getAbsolutePath());
    } else {
      System.out.println("File created: " + file.getAbsolutePath());
    }

    // Set permissions (octal 0640 for rw-r-----)
    if (!file.setWritable(true) || !file.setReadable(true, true)) {
      System.out.println("Failed to set file permissions: " + file.getAbsolutePath());
    } else {
      System.out.println("File permissions set successfully: " + file.getAbsolutePath());
    }

    // Create the directory
    if (!directory.mkdirs()) {
      System.out.println("Failed to create directory: " + directory.getAbsolutePath());
    } else {
      System.out.println("Directory created: " + directory.getAbsolutePath());
    }

    // Set permissions (octal 0750 for rwxr-x---)
    if (!directory.setExecutable(true)
        || !directory.setWritable(false, true)
        || !directory.setReadable(true, true)) {
      System.out.println("Failed to set directory permissions: " + directory.getAbsolutePath());
    } else {
      System.out.println("Directory permissions set successfully: " + directory.getAbsolutePath());
    }
  }
}
