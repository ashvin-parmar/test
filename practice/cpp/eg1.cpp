string getDatasetOrder(string shipmentData)
{
string result="";
for(char m:shipmentData)
{
result.push_back(m);
reverse(result.begin(),result.end());
}
return result;
}
