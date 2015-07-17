call vcvars32.bat
cl test.c
::cmd /c "emcc test.c -o emstest.html"
:: Use the command below to compile the version that should be triggered rather than 
:: run automatically
emcc test.c -o emstest.js -s INVOKE_RUN=0 -s EXPORTED_FUNCTIONS="['_main', '_test']


