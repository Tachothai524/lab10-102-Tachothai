#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    int number = 0 ;
    float sum1 = 0;
    float sum2 = 0;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
        sum1 += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        number++;
    }
    float A = sum1/number;
    cout << "Number of data = " << number << '\n';
    cout << setprecision(3);
    cout << "Mean = " << A << '\n';
    cout << "Standard deviation = " << sqrt((sum2/number)-pow(A,2));
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
