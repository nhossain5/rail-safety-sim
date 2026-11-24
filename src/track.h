#pragma once              // include this header only once per .cpp
#include <string>
#include <vector>

struct Segment {
    double start;         // meters
    double end;           // meters
    double limit;         // speed limit, meters/second
};

class Track {
public:
    // Reads segments from a file. Returns false if the file can't be opened.
    bool load(const std::string& path);

    // Read-only access to the segments (no copy is made).
    const std::vector<Segment>& segments() const;

    // Speed limit at a position. Returns -1 if the position is off the track.
    double limitAt(double pos) const;

private:
    std::vector<Segment> segments_;
};