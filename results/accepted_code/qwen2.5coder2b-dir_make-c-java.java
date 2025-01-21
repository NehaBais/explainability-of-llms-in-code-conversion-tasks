import java.io.File;

public class Main {

  public static void main(String[] args) {
    if (args.length != 2) {
      System.err.println("Usage: " + args[0] + " <path>");
      System.exit(1);
    }

    File dir = new File(args[1]);

    while (!dir.exists()) {
      if (dir.getParentFile() == null) {
        break; // The root directory is reached
      }

      dir.getParentFile().mkdirs(); // Create all missing parent directories

      if (dir.exists()) {
        break;
      } else {
        System.err.println("Couldn't create directory " + args[1]);
        System.exit(1);
      }
    }

    System.out.println("Directory created successfully");
  }
}
