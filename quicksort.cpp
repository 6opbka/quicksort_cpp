#include<iostream>
#include<vector>

using namespace std;

vector<int> quicksort(const vector<int> &arr){
    if (arr.size()<2){
        return arr;
    }
    else{
        int pivot = arr[0];
        vector<int> less;
        vector<int> greater;
        for (int i = 1; i<arr.size(); i++){
            int value = arr[i];
            if(value<=pivot){
                less.push_back(value);
            }
            else{
                greater.push_back(value);
            }
        }
        vector<int> sorted_less = quicksort(less);
        vector<int> sorted_greater = quicksort(greater);
        sorted_less.push_back(pivot);
        sorted_less.insert(sorted_less.end(),sorted_greater.begin(),sorted_greater.end());
        return sorted_less;
    }
    
}

int main(){
    for(int i : quicksort({4,3,2,1})){
        cout<<i<<endl;
    }
   
    return 0;
}
//memes