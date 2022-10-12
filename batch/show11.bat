@echo off
if [%*] NEQ [] (echo %* && cd %* && tre -l1) 
