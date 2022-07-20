@echo off
git add .
SET /P YourName=Enter commit message:
git commit -m  "%YourName%"
git push