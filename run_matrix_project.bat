@echo off

echo =============================
echo Building linear-algebra-for-ml-cpp
echo =============================

g++ examples\neural_network_simulation.cpp src\*.cpp -Iinclude -o programa

if %errorlevel% neq 0 (
    echo.
    echo Build failed.
    pause
    exit /b
)

echo.
echo =============================
echo Running program
echo =============================

programa.exe

pause