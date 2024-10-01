import java.io.*;

public class Main {
  public static void main(String[] args) {
    File directory = new File("./path/to/dir");
    if (!directory.exists() && !directory.mkdirs()) {
      System.out.println("Failed to create directory.");
    } else {
      System.out.println("Directory created successfully.");
    }
  }
}
