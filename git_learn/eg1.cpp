#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int> v {10,20,30,40,50,40,30,50,70};
auto lb=lower_bound(v.begin(),v.end(),30);
auto ub=upper_bound(v.begin(),v.end(),30);
cout<<"Lower Bound: "<<lb-v.begin()<<endl;
cout<<"Upper Bound: "<<ub-v.begin()<<endl;


//nothing just added something
//git reset --soft 8bc003abaee1e2d2d6fbde8b796f97ea36d471c9
return 0;
}
