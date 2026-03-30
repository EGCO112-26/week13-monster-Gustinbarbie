//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("gay",20,67);
    monster m2("fang"),m4("pang",30);
    monster x[5]{{"sugoi",5},{"somsri",5,6}};
    p=new monster("lulu",10,50);
    delete p;
    return 0;
}
