@echo off

pushd dippydro
call build.bat
popd
if %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% exit)

pushd editor
call build.bat
popd
if %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% exit)

echo Done
pause