public class Main {
  public static void main(String[] args) {
    // Rename "input.txt" into "output.txt" and "docs" into "mydocs", both in the current working
    // directory
    System.rename("input.txt", "output.txt");
    System.rename("docs", "mydocs");

    // Rename "/input.txt" into "/output.txt" and "/docs" into "/mydocs"
    System.rename("/input.txt", "/output.txt");
    System.rename("/docs", "/mydocs");
  }
}
