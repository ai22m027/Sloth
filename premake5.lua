workspace "Sloth"
    architecture "x64"
    startproject "Sandbox"
    
    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories realtive to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "vendor/GLFW/include" --something wrong here

include "vendor/GLFW"

project "Sloth"
    location "Sloth"
    kind "SharedLib"
    language "C++"

    targetdir ("bin/"  .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/"  .. outputdir .. "/%{prj.name}")

    pchheader "stpch.h"
    pchsource "Sloth/src/stpch.cpp"

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "%{prj.name}/src",
        "%{prj.name}/vendor/spdlog/include",
        "%{IncludeDir.GLFW}"
    }

    links
    {
        "GLFW",
        "opengl32.lib"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "Off" -- set to "Off" to enabel Mulithreaded DLL or Multithreaded Debug DLL
        systemversion "latest"

        defines 
        {
            "ST_PLATFORM_WINDOWS",
            "ST_BUILD_DLL"
        }

        postbuildcommands
        {
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
        }
    
    filter "configurations:Debug"
        defines "ST_DEBUG"
        symbols "On"


    filter "configurations:Relase"
        defines "ST_RELASE"
        optimize "On"

        
    filter "configurations:Dist"
        defines "ST_DIST"
        optimize "On"

project "Sandbox"
        location "Sandbox"
        kind "ConsoleApp"
        language "C++"

        targetdir ("bin/"  .. outputdir .. "/%{prj.name}")
        objdir ("bin-int/"  .. outputdir .. "/%{prj.name}")
    
    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "Sloth/vendor/spdlog/include",
        "Sloth/src"
    }

    links
    {
        "Sloth"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines 
        {
            "ST_PLATFORM_WINDOWS"
        }
    
    filter "configurations:Debug"
        defines "ST_DEBUG"
        symbols "On"


    filter "configurations:Relase"
        defines "ST_RELASE"
        optimize "On"

        
    filter "configurations:Dist"
        defines "ST_DIST"
        optimize "On"
