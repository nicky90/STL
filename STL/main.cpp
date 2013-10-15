//
//  main.cpp
//  STL
//
//  Created by zhangliang on 13-9-10.
//  Copyright (c) 2013年 edu.self. All rights reserved.
//

//1
/*
#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main () {
    pair <string,double> product1 ("tomatoes",3.25);
    pair <string,double> product2;
    pair <string,double> product3;
    
    product2.first = "lightbulbs";     // type of first is string
    product2.second = 0.99;            // type of second is double
    
    product3 = make_pair ("shoes",20.0);
    
    cout << "The price of " << product1.first << " is $" << product1.second << "\n";
    cout << "The price of " << product2.first << " is $" << product2.second << "\n";
    cout << "The price of " << product3.first << " is $" << product3.second << "\n";
    return 0;
}
*/

//2
/*
#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

class vector2d {
public:
    double x,y;
    vector2d (double px,double py): x(px), y(py) {}
    double length () const {return sqrt(x*x+y*y);}
    bool operator==(const vector2d& rhs) const {return length()==rhs.length();}
    bool operator< (const vector2d& rhs) const {return length()< rhs.length();}
};

using namespace rel_ops;

int main () {
    vector2d a (10,10);	// length=14.14
    vector2d b (15,5);	// length=15.81
    cout << boolalpha;
    cout << "(a<b) is " << (a<b) << "\n";
    cout << "(a>b) is " << (a>b) << "\n"; // 没有定义> ,操作符，但是有#include <UITILITY> 就行了#include <utility>
    
    return 0; 
}
*/


/*
#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main()
{
    
    map<string, int> amap;
    amap.insert(pair<string, int>("Li", 1));
    amap.insert(pair<string, int>("Zhang", 2));
    amap.insert(pair<string, int>("Yang", 3));
    map<string, int>::iterator it;
    for (it = amap.begin(); it != amap.end(); it++) {
        cout << "key:" << it->first << " value:" << it->second << endl;
    }
    
    map<string, int>::reverse_iterator rit;
    for (rit = amap.rbegin(); rit != amap.rend(); rit++) {
        cout << "key:" << rit->first << " value:" << rit->second << endl;
    }
    
    
    return 0;
}
*/


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //1
//    const int pathwidth = 100;
//    cout << pathwidth << endl;
//    string ms("1234 56");
//    cout << ms << endl;
//
//    int myint;
//    stringstream(ms) >> myint;
//    cout << myint;
    
    
    //2
    
    string mystr;
    float price=0;
    int quantity=0;
    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity <<
    endl;
    
    return 0;
}









