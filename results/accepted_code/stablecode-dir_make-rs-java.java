import java.io.File;

public class Main {

    public static void main(String[] args) {
        createDirs("./path/to/dir");
    }

    private static boolean createDirs(String path){
        File dir = new File(path);
  
        // If the directory does not exist, then create it
        if (!dir.exists() && dir.isDirectory())) {
            return dir.mkdirs();
        } 
        return false;
    }
}