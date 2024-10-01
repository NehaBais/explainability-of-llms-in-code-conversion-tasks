import java.io.File;

public class Main {

    public static void mkdirp(String path) {
        File dir = new File(path);
        if (!dir.exists()) {
            boolean success = dir.mkdirs();
                    if(!success){
                     throw new RuntimeException("Failed to create directory for " + path));
                }
            } else {
                // Check if the given path is a file instead of a directory:
                if (!dir.isDirectory()) {
                    throw new IllegalArgumentException(path + " is not a directory"));
                }
            }
        } catch (Exception e) {
            throw new RuntimeException("Failed to create directory for " + path));
        }
    }

    public static void main(String[] args) {
        mkdirp("./path/to/dir");
        System.out.println("Directory created successfully.");
    }
}