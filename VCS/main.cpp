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

float getAverage(std::vector<int> elements){
    float average=0;
    for(int i=0 ; i<elements.size(); i++){
        average+=elements[i];
    }

    average=average/elements.size();

    return average;
}


int getMin(std::vector<int> elements){
    
    int min;

    for(int i=0 ; i<elements.size(); i++){
        if(i==0){
            min = elements[0];
        }
        else if(min > elements[i]){
            min = elements[i];
        }
    }

    return min;
}

int main(){

    std::vector<int> intValues{1,2,3,4,5,6,7,8,9,10};

    int vectorSummation = getSum(intValues);
    float vectorAverage = getAverage(intValues);
    int minValue = getMin(intValues);

    std::cout<<"Array summation = "<<vectorSummation<<std::endl;
    std::cout<<"Average of array elements= "<<vectorAverage<<std::endl;
    std::cout<<"Minimum value in array = "<<minValue<<std::endl;

    return 0;
}