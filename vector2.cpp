#include <iostream>
#include <vector>





int main()
{
std::vector<int> vec;
std::cout<<"Size: "<<vec.size()<<" Capacity: "<<vec.capacity()<<std::endl;

vec.resize(10);
std::fill(vec.begin(),vec.end(),5);
vec.reserve(20);
std::cout<<"Size: "<<vec.size()<< " Capacity: "<<vec.capacity()<<std::endl;

vec.shrink_to_fit();
std::cout<<"Size: "<<vec.size()<<" Capacity: "<<vec.capacity()<<std::endl;

return 0;
}
