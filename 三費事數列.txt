using namespace std;

vector<int> tribonacci(vector<int> signature, int n)
{
  int reset = 0;
  int sum = 0;
  vector<int> result;
  result = signature;
  if (n>2){
  for(int i = 2;i<=n-2;i++){
    result.push_back(result[i-2]+result[i-1]+result[i]);
    }
    return result;
  }
  else if (n==2){
    return vector <int>{signature[0],signature[1]};
    }
  else if (n==1){
    return vector <int>{signature[0]};
    }
  else if (n==0){
    return vector <int>();
    }
  
  
    
    
  }
     
  
  
  
  
    


