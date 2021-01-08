#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    ifstream filescore;
    filescore.open("score.txt");
    string score;
    long double cvscore, meanscore=0,sumscore=0, norootstd_deviation = 0,sumexpo=0,rooted = 0;
    int howmany = 0;

    while(getline(filescore,score)){
        cvscore = stold(score);
        sumexpo+=pow(cvscore,2);
        sumscore+=cvscore;
        howmany+=1;
    }

    meanscore = sumscore/howmany;
    

    norootstd_deviation = (sumexpo/howmany) - (meanscore*meanscore);
    rooted = pow(norootstd_deviation,0.5);


    cout << "Number of data = " << howmany << "\n";
    cout << setprecision(3);
    cout << "Mean = " << meanscore << "\n";
    cout << "Standard deviation = " << rooted;
}