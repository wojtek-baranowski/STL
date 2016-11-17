#include <iostream>
#include <unordered_set>




int main()
{
	std::unordered_set<int> order{1,2,3,4,5,6,7};

	std::cout<<order.bucket(4)<<std::endl;

	std::cout<<order.bucket_size(4)<<std::endl;

	std::cout<<order.bucket_count()<<std::endl;



	return 0;
}
