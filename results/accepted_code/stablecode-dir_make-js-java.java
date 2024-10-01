import java.io.File;

public class Main {

    public static void mkdirp(String path, MyDirCallback cb) {
        File file = new File(path);

        // The directory doesn't exist. Make its parent and try again.
        if (!file.exists()) {
            mkdirp(file.getParent(), dirCb -> {
                try {
                    mkdirp(path, cb);
                } catch (Exception e) {
                    cb.onError(e));
                }
            }));
            return;
        }

        // In the case of any other error, something is borked.
        if (file.isDirectory()) {
            cb.onSuccess();
        } else {
            cb.onError(new Exception("Path exists but it's not a directory")));
        }
    }

    interface MyDirCallback {
        void onSuccess();

        void onError(Exception e));
    }

    public static void main(String[] args) {
        mkdirp("/Users/your_username/test", new MyDirCallback() {
            @Override
            public void onSuccess() {
                System.out.println("Directory created successfully");
            }

            @Override
            public void onError(Exception e)) {
                System.err.println("An error occurred while creating the directory: " + e.getMessage());
            }
        }));
    }
}