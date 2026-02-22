#include<iostream>
using namespace std;

int main()
{
  int nums [7]={100,200,300,400,500,600,700}; 
   cout << "Sizeof (int): " <<sizeof (int)<<endl;
    cout << "Sizeof (nums): " <<sizeof (nums)<<endl;
     cout << "Number Of Elements " <<sizeof(nums)/sizeof(nums[0])<<endl;
    return 0;
}
