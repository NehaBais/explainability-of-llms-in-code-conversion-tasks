import java.io.*;
import java.nio.file.*;

public class FileCreation {
  public static void main(String[] args) throws IOException {
    Path filePath = Paths.get("output.txt");
    Files.createFile(
        filePath,
        PosixFilePermissions.asFileAttribute(PosixFilePermissions.fromString("rw-------")));

    Path dirPath = Paths.get("/docs"); // Assuming the root directory for simplicity
    Files.createDirectory(
        dirPath,
        PosixFilePermissions.asFileAttribute(PosixFilePermissions.fromString("rwxr-x---")));
  }
}
