﻿#include "HydroPCH.h"
#include "EntryPoint.h"
#include "Application.h"
#include "Log.h"
#include "LogVerbosity.h"

namespace Hydro
{
    int Main(int Argc, char** Argv)
    {
        while (g_ApplicationRunning)
        {
            Application* application = CreateApplication();
            application->Run();
            delete application;
        }
        return 0;
    }
}


#if defined(HYDRO_PLATFORM_WINDOWS) && defined(HYDRO_RELEASE)
INT APIENTRY WinMain(HINSTANCE, HINSTANCE, PSTR, INT)
{
    return Hydro::Main(__argc, __argv);
}
#else
int main(int argc, char** argv)
{
    return Hydro::Main(argc, argv);
}
#endif

