#include <iostream>

using namespace std;

class Log
{
public:
    enum Level
    {
        LevelError,LevelWarning,LevelInfo
    };

private:
    Level m_Loglevel = LevelInfo;

public:
    void setlevel(Level level)
    {
        m_Loglevel = level;
    }

    void Error(const char* message)
    {
        if (m_Loglevel >= LevelError)
        {
            cout << "[ERROR]: " << message << endl;
        }
    }

    void Warn(const char* message)
    {
        if (m_Loglevel >= LevelWarning)
        {
            cout << "[WARNING]: " << message << endl;
        }
    }

    void Info(const char* message)
    {
        if (m_Loglevel >= LevelInfo)
        {
            cout << "[INFO]: " << message << endl;
        }
    }
};

int main()
{
    Log log;
    log.setlevel(Log::LevelError);
    log.Error("Hello!!");
    log.Warn("Hello!!");
    log.Info("Hello!!");
    return 0;
}
