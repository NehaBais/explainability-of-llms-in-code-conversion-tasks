import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException, InterruptedException {

        // Create a file with specified permissions and create it if it doesn't exist. The O_CREAT flag is used to create the file, and O_TRUNC flag is used to truncate/empty the file if it already exists.
        new File("output.txt").
                createNewFile(false, 0644));

        // Close the file descriptor
        Runtime.getRuntime().exec("chmod 644 output.txt");

        // Create a directory with specified permissions and create it if it doesn't exist.
        new File("docs").mkdirs();

    }
}