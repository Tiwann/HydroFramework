project "Hydro"
	kind "StaticLib"
	staticruntime "On"
	language "C++"
	cppdialect "C++20"

	targetdir(binaries)
	objdir(intermediate)

	files
	{
		"Source/**.h",
		"Source/**.cpp",
		"Include/**.h",
		"External/**.h",
		"External/**.cpp",
		"External/**.c",
		"Hydro.lua"
	}
	
	pchheader "HydroPCH.h"
	pchsource "Source/HydroPCH.cpp"

	includedirs
	{
	    "Source",
		"%{libs.glfw}/include",
		"%{libs.stb}/include",
		"%{libs.Vulkan}/Include",
		"%{libs.glad}/include"
	}
	
	links
	{
		"glfw",
		"stb",
	}

	filter "Platforms:Vulkan"
		links { "vulkan-1" }
		libdirs "%{libs.Vulkan}/Lib"
		defines { "HYDRO_PLATFORM_VULKAN", "GLFW_INCLUDE_VULKAN" }

	filter "Platforms:DirectX"
		links { "d3d12", "dxgi", "d3dcompiler" }
		defines "HYDRO_PLATFORM_DIRECTX"
	
	filter "Platforms:OpenGL"
	    links { "glad", "opengl32" }
	    defines "HYDRO_PLATFORM_OPENGL"
	

	filter "System:Windows"
		defines { "GLFW_EXPOSE_NATIVE_WIN32", "HYDRO_PLATFORM_WINDOWS" }

	filter "System:Linux"
		defines { "HYDRO_PLATFORM_UNIX" }
		

	filter "Configurations:Debug"
		runtime "Debug"
		optimize "Off"
		symbols "On"
		defines "HYDRO_DEBUG"

	filter "Configurations:Release"
		runtime "Release"
		optimize "On"
		symbols "Off"
		defines "HYDRO_RELEASE"
