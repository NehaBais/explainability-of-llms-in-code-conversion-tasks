#include <boost/filesystem/operations.hpp>

class mkdirp {
public:
  mkdirp(const std::string &p, const ErrorCallback &cb)
      : path_(boost::filesystem::path(p))), cb_(cb) {}

  ~mkdirp() {}

private:
  void handle_error(const boost::system::error_code &ec);
  boost::filesystem::path path_;
  ErrorCallback cb_;
};