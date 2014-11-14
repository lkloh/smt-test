smt-test
========

Installation - Ubuntu
---------------------
* Download the [source code](http://cvc4.cs.nyu.edu/builds/src/)
* Unzip the file and cd into it
* Download and install [gmplib](https://gmplib.org/)
* Run ``./configure``
* Run ``make examples`` to run the examples

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

Running code that sources Rapidnet
----------------------------------
* Reference: [Wenchao Zhou](http://people.cs.georgetown.edu/~wzhou/)
* You need to tell ``g++`` where to find the header files and the library (at linking stage). For example, to run the following ``c++`` file (``test.cc``) that references the header ``attribute.h``, found in the RapidNet folder:

    #include<attribute.h>

    int main() {
      Ptr<AttributeValue> value;
      return 0;
    }

If you just type 

    g++ test.cc -otest
    
The compiler gives an error stating that it cannot find the header file.

Now we can let the ``g++`` compiler know where to find the header file:

    g++ -I/<root-directory-for-ns3>/build/debug/ns3 -lns3 -L/<root-directory-for-ns3>/build/debug test.cc -o test

Switches done:
1. ``-I``: Where to find the header files (There are a lot of ``.h`` files within that directory).  
2. ``-l``: Reference the ``libns3.so`` library 
3. ``-L``: Where to find the library file.




