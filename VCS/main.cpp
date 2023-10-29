#include <iostream>
#include <vector>
#include <string>

int getSum(std::vector<int> elements){
    int sum=0;
    for(int i=0 ; i<elements.size(); i++){
        sum+=elements[i];
    }
    return sum;
}
int main(){

    std::vector<int> intValues{1,2,3,4,5,6,7,8,9,10};

    int vectorSummation = getSum(intValues);

    std::cout<<"Array summation = "<<vectorSummation<<std::endl;

    return 0;
}