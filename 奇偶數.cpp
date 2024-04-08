#include <string>
#include <vector>
using namespace std;
string odd_or_even(const vector<int> &arr)
{
    ; // your code here
    int total = 0;
    
  for(auto i : arr){
    total += *arr[i];
}
    if (total % 2 ==0 ){
      return "even";
    
    }
  else{
    return "odd";
  }
}