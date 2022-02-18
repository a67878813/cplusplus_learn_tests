#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>

using namespace std;
void print_list(list<int> &ll) {
    for (list<int>::iterator it = ll.begin(); it != ll.end(); ++it)
        std::cout << *it << "\t";
    std::cout << std::endl;
}

int32_t main() {
    std::vector<int32_t> v = {1, 2, 3, 4, 5, 6, 7};
    std::cout << "v.begin() " << *v.begin() << std::endl;

    // 1,2,3,4,100,5,6,7
    v.push_back(155);
    // std::cout << *it << std::endl;
    // std::cout << it-v.begin() << std::endl;
    std::cout << v.size() << std::endl;

    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << v.capacity() << std::endl;
    std::cout << v.max_size() << std::endl;
    std::cout << v.at(3) << std::endl;
    std::cout << v[100] << std::endl;
    // v.front()    v[0]
    // v.back()    last element
    // v.shrink_to_fit()
    //   v.empty()     is empty?
    //  .begin .end .rbegin  .rend
    // insert(), erase()
    // push_back(),  pop_back()

    list<int> ll = {-100, -200, -300, -404};
    v.insert(v.begin(), ll.begin(), ll.end());
    cout << v[0] << v[1] << v[2] << endl;

    list<int> nums = {1, 2, 3, 4, 5};
    print_list(nums);
    std::cout << "Size = " << nums.size() << std::endl;
    list<int> nums2 = nums;
    print_list(nums2);
    std::cout << nums.front() << " back " << nums.back() << std::endl;
    std::cout << std::boolalpha << nums.empty() << std::endl;
    std::cout << *nums.begin() << " " << *nums.end() << std::endl;
    std::cout << *nums2.rbegin() << std::endl;

    print_list(nums);
    list<int>::iterator it = nums.begin();
    while (*it != 3 && it != nums.end())
        ++it;
    nums.insert(it, 100);
    print_list(nums);
    nums.erase(it);
    print_list(nums);
    nums.remove(4);
    print_list(nums);
    nums.clear();
    print_list(nums);
    std::cout << std::boolalpha << nums.empty() << std::endl;


    nums2.push_back(-100);
    nums2.push_front(-200);
    print_list(nums2);
    nums2.pop_back();
    nums2.pop_front();
    print_list(nums2);


    return 0;
}