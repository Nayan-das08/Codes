@echo off

mkdir %*
cd %*
xcopy /e "D:\Code\p5 Codes\New_project_Template" . > nul
rem cd..