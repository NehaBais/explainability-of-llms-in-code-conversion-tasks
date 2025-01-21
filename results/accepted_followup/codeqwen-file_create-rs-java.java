import java.io.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    create(".").thenAccept(Main::createRoot);
  }

  // ... existing code ...
}
