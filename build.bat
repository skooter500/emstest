call vcvars32.bat
cl test.c
::cmd /c "emcc test.c -o emstest.html"
:: Use the command below to compile the version that should be triggered rather than 
:: run automatically
cmd /c "emcc test.c -o emstest.js -s INVOKE_RUN=0"


