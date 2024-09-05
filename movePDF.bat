@echo off

set "source_dir=Z:\BOOutBox"
set "dest_dir=G:\My Drive\Hooper Rd Daily Reports"

echo Moving PDF files from %source_dir% to %dest_dir%...

move "%source_dir%\*.pdf" "%dest_dir%"

echo PDF files moved successfully!