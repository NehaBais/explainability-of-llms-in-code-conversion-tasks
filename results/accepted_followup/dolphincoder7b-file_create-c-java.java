import static java.nio.file.StandardOpenOption.*;

import java.io.IOException;
import java.nio.file.*;
import java.nio.file.attribute.FileAttribute;
import java.util.Arrays;

public class Main {
  public static void main(String[] args) throws IOException {
    /* permissions are before umask  */
    Path outputFilePath = Paths.get("output.txt");

    try (FileOutputStream outputStream =
        new FileOutputStream(outputFilePath.toFile(), CREATE, TRUNCATE_EXISTing)) {
      // do nothing - create an empty file
    }

    FileAttribute<Set<PosixFilePermission>> permissions =
        PosixFilePermissions.asFileAttribute(
            Arrays.asList(
                PosixFilePermission.OWNER_READ,
                PosixFilePermission.GROUP_READ,
                PosixFilePermission.OTHERS_READ));

    try {
      Files.createDirectory(Paths.get("docs"), permissions);
    } catch (IOException e) {
      System.err.println(e);
    }
  }
}
