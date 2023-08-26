// --------------------------------
// SCRNSIZE.C -- Displays screen size in a message box
//

#include <windows.h>
#include <tchar.h>
#include <stdio.h>

int CDECL MessageBoxPrintf(TCHAR* szCaption, TCHAR * szFormat, ...)
{
    TCHAR szBuffer [1024] ;
    va_list pArgList ;

    // The va_start macro (defined in STDARG.H is usually equivalent to:
    // pArgList = (char *) &szFormat + sizeof(szFormat) ;

    va_start (pArgList, szFormat) ;

    // The last argument to wvsprintf points to the arguments

    _vnsprintf (szBuffer, sizeof (szBuffer) / sizeof (TCHAR),
                szFormat, pArgList) ;
    return MessageBox (NULL, szBuffer, szCaption, 0) ;

}

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    int cxScreen, cyScreen ;

    cxScreen = GetSystemMetrics (SM_CXSCREEN) ;
    cyScreen = GetSystemMetrics (SM_CYSCREEN) ;
    MessageBoxPrintf (TEXT ("ScrnSize"),
                      TEXT ("The screen is %i pixels wide by %iu pixels high."),
                      cxScreen, cyScreen) ;
    return 0 ;
}
