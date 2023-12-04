@REM Build for Visual Studio compiler. Run your copy of vcvars32.bat or vcvarsall.bat to setup command-line compiler.
@echo off

cd "run_tree"

@set OBJ_FILES_OUT=debug
IF EXIST %OBJ_FILES_OUT%\ (
   echo 
) ELSE (
   MKDIR %OBJ_FILES_OUT%
)

@set OUT_EXE=kekere_debug
@set INCLUDES=/I..\src\*.h^
              /I..\libs\imgui\backends /I..\libs\imgui^
              /I "%WindowsSdkDir%Include\um"^
              /I "%WindowsSdkDir%Include\shared" /I "%DXSDK_DIR%Include"
               
@set SOURCES=..\src\*.cpp^
             ..\libs\imgui\backends\imgui_impl_dx11.cpp^
             ..\libs\imgui\backends\imgui_impl_win32.cpp^
             ..\libs\imgui\imgui*.cpp
             
@set LIBS=/LIBPATH:"%DXSDK_DIR%/Lib/x86" d3d11.lib d3dcompiler.lib user32.lib kernel32.lib

cl /nologo /Zi /MD %INCLUDES% /D UNICODE /D _UNICODE %SOURCES% /Fe%OUT_EXE%.exe /Fo%OBJ_FILES_OUT%/ /link %LIBS%
cd ..

