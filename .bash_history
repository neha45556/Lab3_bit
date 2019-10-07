git clone https://github.com/neha45556/Lab2_introToAVR.git
ls
cd Lab2_introToAVR
ls
git pull
ls
cd Lab2_introToAVR
ls
maketest
make test
mkdir build
ls build
mkdir objects
mkdir results
cd ..
avr-gcc -mmcu=atmega1284 -I/usr/csshare/pkgs/simavr/ -Iheader/ -D_SIMULATE_ -Wall -Wl,--undefined=_mmcu,--section-start=.mmcu=910000 -o build/objects/main.elf source/main.c
ls
cd Lab2_introToAVR
ls
rm -rf results
rm -rf objects
cd build
mkdir objects
mkdir results
ls
cd ..
avr-gcc -mmcu=atmega1284 -I/usr/csshare/pkgs/simavr/ -Iheader/ -D_SIMULATE_ -Wall -Wl,--undefined=_mmcu,--section-start=.mmcu=910000 -o build/objects/main.elf source/main.c
make test
git add build
git commit -m "build"
git push
make test.
make test
 vim test/tests.gdb
