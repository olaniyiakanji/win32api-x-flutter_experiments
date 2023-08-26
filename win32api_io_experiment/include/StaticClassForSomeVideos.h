#ifndef STATICCLASSFORSOMEVIDEOS_H
#define STATICCLASSFORSOMEVIDEOS_H

#ifndef UNICODE_NOCHAR
#include <tchar.h>


//// some other tinkering
//#define _tcslen wcslen
//#define _tcslen strlen
//
//// if some condition,
//typedef wchar_t TCHAR;
//// else do this:
//typedef char TCHAR;
//
//#define
//#endif // UNICODE_NOCHAR

// a typical windows program includes a header file `WINDOWS.H`
// that have a definition of wchar_t;
typedef char CHAR;
typedef wchar_t WCHAR;



class StaticClassForSomeVideos
{
    public:
        StaticClassForSomeVideos(io_device link);
        virtual ~StaticClassForSomeVideos();

    protected:

    private:
};

#endif // STATICCLASSFORSOMEVIDEOS_H
