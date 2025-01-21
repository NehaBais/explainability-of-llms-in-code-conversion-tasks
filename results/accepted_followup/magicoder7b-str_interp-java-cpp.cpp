#include <boost/format.hpp> // boost::str(boost::format...)
#include <sstream>          // std::stringstream

int main() {
  std::string adjective = "little";
  std::string lyric;
  lyric = boost::str(boost::format("Mary had a %s lamb") % adjective);

  // Now you can use `lyric` as you like...
}