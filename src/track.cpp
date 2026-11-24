#include "track.h"
#include <fstream>
#include <sstream>

bool Track::load(const std::string& path) {
    // TODO 1: open the file with std::ifstream; if it didn't open, return false
    // TODO 2: clear segments_ (in case load is called twice)
    // TODO 3: loop with std::getline(file, line)
    //   - skip empty lines and lines that start with '#'
    //   - put the line in a std::istringstream and read start, end, limit
    //   - push a Segment into segments_
    return true;
}

const std::vector<Segment>& Track::segments() const {
    // TODO: return the member
}

double Track::limitAt(double pos) const {
    // TODO: loop over segments_ (use const auto& seg : segments_)
    //   if pos >= seg.start and pos < seg.end, return seg.limit
    return -1;
}