#include <iostream>
#include <vector>
using namespace std;
int main(){
    //declaration--> vector<datatype> vector-name(size); (size)--> not compulsory.
    vector <int> v;
    // length of the array--> v.size();
    //v.resize(new size);--> resize operation


    //v.capacity()
    //capcity>= size
    //capcity automatically increases accordingly with the increase in size of the vector
    //ex: size-1, capacity-1
    //size-2, capacity-2
    //size-3, capcity-4
    //size-5, capcity-8
    //i.e, capcity increase in 2 powers,however this may not be true always and is compiler dependent


    //To add elements: -- (a)v.pushback(element):
    //2 3 4 now v.pushback(5)---> 2 3 4 5
    //                 -- (b)v.insert(position,element):
    //       position= relative to position of first or last element
    //Ex:  v.begin()--> first element
    //     v.end()--> last element
    //Ex: v.insert(v.begin()+2,5);


    //To delete elements: --> v.pop_back()--> remove last element;
    //                    --> or v.erase(position);
    //                    --> v.clear()--> delete all elements;
return 0;
}