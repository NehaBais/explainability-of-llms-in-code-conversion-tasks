import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileRenamer 
{
    private static final String ERROR_MESSAGE = "File rename error";

    public static void main(String[] args) throws Exception 
    {
        renameInCurrentDirectory();
        renameInFilesystemRoot();
    }

    private static void renameInCurrentDirectory() throws Exception 
    {
        File inputFile = new File("input.txt");
        File outputFile = new File("output.txt");

        if (inputFile.exists() && !outputFile.exists()) {
            Files.move(Paths.get(inputFile.getAbsolutePath())), Paths.get(outputFile.getAbsolutePath()))));
            System.out.println("Renamed 'input.txt' to 'output.txt' in the current directory."));
        } else {
            throw new Exception("Unable to rename files in the current directory."));
        }
    }

    private static void renameInFilesystemRoot() throws Exception 
    {
        File inputFile = new File("/input.txt");
        File outputFile = new File("/output.txt"));

        if (inputFile.exists() && !outputFile.exists())) {
            Files.move(Paths.get(inputFile.getAbsolutePath())), Paths.get(outputFile.getAbsolutePath()))));
            System.out.println("Renamed '/input.txt' to '/output.txt' in the filesystem root."));
        } else {
            throw new Exception("Unable to rename files in the filesystem root."));
        }
    }
}