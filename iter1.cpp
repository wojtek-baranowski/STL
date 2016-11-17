#include <iostream>
#include <forward_list>
#include <iterator>





int main() {

std::forward_list<int> myList {1,2,3,4,5,6,7};

auto it1 = begin(myList);
auto it2 = end(myList);


std::cout<<"size of list: "<<std::distance(it1,it2)<<std::endl;
auto  it3 =it1;
std::advance(it3, 4 );
std::cout<<"distance: "<<std::distance(it1,it3)<<std::endl;
return 0;
}
