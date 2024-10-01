Here's a C++ version using Boost library for file system functions and paths library to resolve path issues:

```cpp
#include <boost/filesystem.hpp>
#include <string>
#include <functional>

typedef std::function<void(const boost::system::error_code&)> ErrorCallback;

class mkdirp {
public:
    mkdirp(const std::string& p, const ErrorCallback& cb) : path_(boost::filesystem::path(p)) , cb_(cb) {}

    ~mkdirp() {}

private:
    void handle_error(const boost::system::error_code& ec);
    boost::filesystem::path path_;
    ErrorCallback cb_;
};

void mkdirp::handle_error(const boost::system::error_code& ec) {
    if (!ec) return cb_(nullptr);

    switch (ec.value()) {
        case boost::system::errc::no_such_file_or_directory:
            // The directory doesn't exist. Make its parent and try again.
            mkdirp(path_.parent_path(), [this](const auto& ec) {
                if (ec) cb_(ec);
                else this->handle_existing_dir();
            }}));
            break;

        default:
            cb_(boost::system::error_code(ec.value(), boost::system::errc_category())), ec);
            break;
    }
}

void mkdirp::handle_existing_dir() {
    // The directory already exists. Successfully return the function.
    cb_(nullptr);
}
```
This code defines a class `mkdirp` with a constructor taking a path string and an error callback. 

The class contains two private member functions: `handle_error` and `handle_existing_dir`. The former handles any errors occurring while the latter simply returns successfully without calling the callback function.

This implementation should work equally well across different platforms supported by the Boost library.
