import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws Exception {
        renameInCurrentDir("input.txt", "output.txt");
        renameInCurrentDir("docs", "mydocs");
        renameOnFilesystemRoot("/input.txt", "/output.txt");
        renameOnFilesystemRoot("docs", "mydocs");
    }

    public static void renameInCurrentDir(String oldName, String newName) throws Exception {
        File src = new File(oldName);
        File dest = new File(newName);
        if (src.exists() && dest.createNewFile()) {
            Files.move(src.toPath(), dest.toPath());
            System.out.println("Renamed file " + oldName + " to " + newName));
        } else {
            throw new Exception("Failed to rename file " + oldName + " to " + newName));
        }
    }

    public static void renameOnFilesystemRoot(String oldPath, String newPath) throws Exception {
        File src = new File(oldPath);
        File dest = new File(newPath);
        if (src.exists() && dest.createNewFile()) {
            Files.move(src.toPath(), dest.toPath()));
            System.out.println("Renamed file " + oldPath + " to " + newPath));
        } else {
            throw new Exception("Failed to rename file " + oldPath + " to " + newPath));
        }
    }
}