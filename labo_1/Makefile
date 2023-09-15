CXX=c++
AR=ar

all: executable executable2

%.cc.o: %.cc
	$(CXX) -c -o $@ $^

lib%.a: %.cc.o
	$(AR) cr $@ $^

%: %.cc.o
	$(CXX) -o $@ $^

executable2: libuseful.a

clean:
	rm -rf *.o *.a executable executable2
