#ifndef debuggerLogger_hpp
#define  debuggerLogger_hpp
#include "ilogger.hpp"

class DebuggerLoger : public ILogger{
public:
    void log(const string& message);
};
#endif