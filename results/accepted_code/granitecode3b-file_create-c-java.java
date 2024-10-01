import java.io.File;

public class FileCreator {
  public static void main(String[] args) {
    // Create an empty file called "output.txt" in the current working directory
    try (java.nio.file.Files f = java.nio.file.Files.createFile(new File("output.txt").toPath())) {
    } catch (Exception e) {
      System.err.println("Error creating output.txt: " + e);
    }

    // Create an empty directory called "docs" in the filesystem root
    try (java.nio.file.Files f = java.nio.file.Files.createDirectory(new File("/docs").toPath())) {
    } catch (Exception e) {
      System.err.println("Error creating /docs: " + e);
    }

    // Create an empty file called "output.txt" in the current working directory
    try (java.nio.file.Files f = java.nio.file.Files.createFile(new File("output.txt").toPath())) {
    } catch (Exception e) {
      System.err.println("Error creating output.txt: " + e);
    }

    // Create an empty directory called "docs" in the filesystem root
    try (java.nio.file.Files f = java.nio.file.Files.createDirectory(new File("/docs").toPath())) {
    } catch (Exception e) {
      System.err.println("Error creating /docs: " + e);
    }
  }
}
