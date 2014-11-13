smt-test
========

Installation - Ubuntu
---------------------
* Download the [source code](http://cvc4.cs.nyu.edu/builds/src/)
* Unzip the file and cd into it
* Download and install [gmplib](https://gmplib.org/)
* Run ``./configure``

Resources
---------

* [CVC4 Official Page](http://cvc4.cs.nyu.edu/web/)
* [CVC4 tutorial](http://cvc4.cs.nyu.edu/wiki/Tutorials)

Running the code
----------------

To run a C++ file named ``FILE.c``
  
    g++ FILE.c -o FILE
    ./demo.c
    
To run a C++ file that makes use of the CVC4 libraries, such as ``helloworld.cpp``,

    g++ helloworld.cpp -o helloworld -lcvc4
    ./helloworld
