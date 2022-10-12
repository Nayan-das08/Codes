@echo off
if [%*] NEQ [] (echo "%* is not NULL") else (echo "%* is NULL")