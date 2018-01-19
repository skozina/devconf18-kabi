obj-m += mymod.o

version=4.13.0

all:
	make -C /lib/modules/${version}/build M=$(PWD) modules

clean:
	make -C /lib/modules/${version}/build M=$(PWD) clean
