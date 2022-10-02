1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
#include <iostream>
using namespace std;
class Complex{
private:
    int real;
    int imaginary;
public:
    void setValues(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }

    void print(){
        cout<<real<<" + "<<imaginary<<"j"<<"\n";
    }
};

int main()
{
    Complex c1;
    c1.setValues(4,6);
    c1.print();

    return 0;
}

2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
#include <iostream>
using namespace std;
class Time{
private:
    int hour;
    int minute;
    int second;
public:
    void setTime(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }

    void showTime(){
        cout<<hour<<":"<<minute<<":"<<second<<"\n";
    }
};

int main()
{
    Time t;
    t.setTime(2,45,32);
    t.showTime();

    return 0;
}

3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.

#include <iostream>
using namespace std;
class Factorial{
public:
   int fact(int x){
       int t=1;
       for (int i = 1; i <=5; ++i) {
           t=t*i;
       }
       return t;
   }
};

int main()
{
   Factorial f;
   cout<<f.fact(5);

   return 0;
}

4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.

#include <iostream>
using namespace std;
class LargestNumber{
public:
   int largest(int x,int y ,int z){
       if(x>y && x>z){
           return x;
       }
       else if(y>z)
           return y;
       else return z;
   }
};

int main()
{
   LargestNumber l;
   cout<<l.largest(5,5,1);

   return 0;
}

5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.

#include <iostream>
using namespace std;
class ReverseNumber{
public:
   int reverse(int n) {
       int sum=0;
       while (n>0) {
           int lastdigit = n % 10;
           n = n / 10;
           sum=sum*10+lastdigit;
       }
       return sum;
   }
};

int main()
{
   ReverseNumber r;
   cout<<r.reverse(8932);
   return 0;
}

6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.

#include <iostream>
using namespace std;
class Square{
public:
   inline int sq(int n,int &counter){
       counter++;
       return n*n;
   }
};
int main()
{
   Square s;
   int counter=0;
   cout<<s.sq(4,counter)<<"\n";
   cout<<s.sq(4,counter)<<"\n";
   cout<<s.sq(4,counter)<<"\n";
   cout<<s.sq(4,counter)<<"\n";
   cout<<counter;
   return 0;
}

7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.

#include <iostream>
using namespace std;
class LargestNumber{
public:
   int largest(int x,int y ,int z){
       if(x>y && x>z){
           return x;
       }
       else if(y>z)
           return y;
       else return z;
   }
};

int main()
{
   LargestNumber l;
   cout<<l.largest(5,5,1);

   return 0;
}

8. Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include <iostream>
using namespace std;
class Rectangle{
public:
   inline int area(int l,int b){
       return l*b;
   }
};

int main()
{
   Rectangle r;
   cout<<r.area(3,5);
   return 0;
}

9. Define a class Circle and define an instance member function to find the area of the
circle.

#include <iostream>
using namespace std;
class Circle{
public:
   inline int area(int r){
       return 3.14*r*r;
   }
};

int main()
{
   Circle r;
   cout<<r.area(3);
   return 0;
}

10. Define a class Area and define instance member functions to find the area of the
        different shapes like square, rectangle , circle etc

#include <iostream>
using namespace std;
class Area{
public:
   inline int areaOfSquare(int l){
       return l*l;
   }
   inline int areaOfRectangle(int l,int b){
       return l*b;
   }
   inline int areaOfcircle(int r){
       return 3.14*r*r;
   }
};

int main(){
   Area a;
   cout<<a.areaOfRectangle(2,5)<<"\n";
   cout<<a.areaOfSquare(4)<<"\n";
   cout<<a.areaOfcircle(5)<<"\n";
   return 0;
}
