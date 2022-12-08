@echo off
git add *

rem powershell -command get-date -format {"PC\: ddd dd MMM yyyy | hh\:mm tt"} > D:\Code\problems\date.txt
rem for /f "delims=" %x in (date.txt) do git commit 

for /f "delims=" %%x in ('powershell -command get-date -format {"PC\: ddd dd MMM yyyy | hh\:mm tt"}') do set output=%%x
git commit -m "%output%"