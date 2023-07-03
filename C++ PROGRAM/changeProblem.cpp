   #include<bits/stdc++.h>
    using namespace std;
bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        vector<int> v;
        for(int item:bills){
            if(item==5){
                v.push_back(item);
            }else if(item==10){
                    int returnMoney=10-item;
                    auto it=find(v.begin(),v.end(),returnMoney);
                    if(it==v.end())
                      return false;
                    else{
                      v.erase(it);
                      v.push_back(item);
                    }
                  }else if(item==20){
                           if(count(v.begin(),v.end(),5)>=3){
                            for(int i=1;i<=3;i++){
                             auto it=find(v.begin(),v.end(),5);
                             v.erase(it);
                            }
                            v.push_back(item);
                           }
                            else if(count(v.begin(),v.end(),5)>=1&&(count(v.begin(),v.end(),10)>=1)){
                                 auto it=find(v.begin(),v.end(),10);
                                 v.erase(it);
                                 it=find(v.begin(),v.end(),5);
                                 v.erase(it);
                                 v.push_back(item);
                               }
                                  else
                                    return false;
                        }
                        
                        
            
        }
        return true;
    }
 
    int main(){
        vector<int> bills={5,5,5,10,10,20};
    cout<<lemonadeChange(5,bills) ;
    return 0;
    }