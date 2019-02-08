//
//  standarddeviation.cpp
//  CS332
//
//  Created by Guillem Pérez on 8/30/18.
//  Copyright © 2018 Guillem Pérez. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    system ("cls");
    
    const int size=10;
    
    double xnum[size]={33, 37, 42, 51, 54, 56, 57, 61, 67, 72};
    double totalxnum;
    double meanxnum;
    double varianceadd = 0;
    double variance;
    double stdeviation;
    double z1, z2, xz3, xz4;
    double midrange;
    
    
    //Average SUM of x / size
    for(int y=0; y<size; y++){
        totalxnum += xnum[y];
        
    }
    
    meanxnum = totalxnum / size;
    
    cout<<"The Average is: "<<meanxnum<<endl;
    
    //Variance S^2 = SUM(Xi + meanxnum)/(size-1)
    
    for (int i = 0; i < size; i++){
        varianceadd = varianceadd + pow(xnum[i]-meanxnum, 2);
        
    }
    
    variance = varianceadd / (9);
    
    cout<<"The variance is: "<<variance<<endl;
    
    //Standard Deviation = sqrt of the variance
    stdeviation = sqrt(variance);
    
    cout<<"The standard deviation is: "<<stdeviation<<endl;
    
    //Z for x=61 and x=42, z = (x-mean)/stdeviation
    
    z1 = (61 - meanxnum)/stdeviation;
    z2 = (42 - meanxnum)/stdeviation;
    
    cout<<"The Z number for x = 64 is: "<<z1<<endl;
    cout<<"The Z number for x = 42 is: "<<z2<<endl;
    
    //Z reverse for z3 = -1.27 and z4 = 1.51, X = (mean + z * stdeviation) * 10 <- because calories are divided by 10 to make the x values
    
    xz3 = (meanxnum + -1.27 * stdeviation) * 10;
    xz4 = (meanxnum + 1.51 * stdeviation) * 10;
    
    cout<<"The calorie number for z = -1.27 is: "<<xz3<<endl;
    cout<<"The calorie number for z = 1.51 is: "<<xz4<<endl;
    
    //Midrange (High + Low)
    
    midrange = (73 + 33) / 2;
    
    cout<<"The midrange is: "<<midrange<<endl;
    
    
    return 0;
    
}
