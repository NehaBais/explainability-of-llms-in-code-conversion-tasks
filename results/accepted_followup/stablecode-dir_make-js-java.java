import java.io.File;

public class Main 
{

    public static void mkdirp(String path, MyDirCallback cb) 
    {
        File file = new File(path);

        // The directory doesn'T exist. Make its parent and try again.
        if (!file.exists()) 
        {
            mkdirp(file.getParent(), dirCb -> 
            {
                try 
                {
                    mkdirp(path, cb);
                } catch (Exception e) 
                {
                    cb.onError(e));
                }
            }));
            return;
        }

        // In the case of any other error, something is borked.
        if (file.isDirectory()) 
        {
            cb.onSuccess();
        } else 
        {
            cb.onError(new Exception("Path exists but it'S not a directory")));
        }
    }

    interface MyDirCallback 
    {
        void onSuccess();

        void onError(Exception e));
    }

}